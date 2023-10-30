#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define BUF_SIZE 64

/**
 * error_exit - Print an error message and exit with status code 98.
 * @msg: The error message to print.
 */
void error_exit(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * read_elf_header - Read and display the ELF header information.
 * @fd: The file descriptor of the ELF file.
 */
void read_elf_header(int fd)
{
	char buf[BUF_SIZE];
	ssize_t n;
	uint8_t *magic;
	uint8_t class, data, version, os_abi, abi_version;
	uint16_t type;
	uint64_t entry;
	int i;

	lseek(fd, 0, SEEK_SET);

	n = read(fd, buf, BUF_SIZE);
	if (n == -1)
		error_exit("Error reading ELF header");

	magic = (uint8_t *)buf;
	class = magic[4];
	data = magic[5];
	version = magic[6];
	os_abi = magic[7];
	abi_version = magic[8];
	type = *(uint16_t *)(magic + 16);
	entry = *(uint64_t *)(magic + 24);

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x ", magic[i]);
	printf("\n");
	printf("  Class:                             ELF");
	if (class == 1)
		printf("32\n");
	else if (class == 2)
		printf("64\n");
	printf("  Data:                              2's complement, ");
	if (data == 1)
		printf("little endian\n");
	else if (data == 2)
		printf("big endian\n");
	printf("  Version:                           %d (current)\n", version);
	printf("  OS/ABI:                            ");
	if (os_abi == 0)
		printf("UNIX - System V\n");
	else if (os_abi == 2)
		printf("UNIX - NetBSD\n");
	else if (os_abi == 6)
		printf("UNIX - Solaris\n");
	else if (os_abi == 53)
		printf("<unknown: 53>\n");
	else
		printf("<unknown>\n");
	printf("  ABI Version:                       %d\n", abi_version);
	printf("  Type:                              ");
	if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown>\n");
	printf("  Entry point address:               0x%lx\n", entry);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
		error_exit("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error opening file");

	read_elf_header(fd);

	close(fd);
	return (0);
}
