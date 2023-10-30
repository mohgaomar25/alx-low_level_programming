#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
 * display_elf_header_info - Displays information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
			header->e_ident[EI_MAG0], header->e_ident[EI_MAG1], header->e_ident[EI_MAG2], header->e_ident[EI_MAG3],
			header->e_ident[EI_CLASS], header->e_ident[EI_DATA], header->e_ident[EI_VERSION],
			header->e_ident[EI_OSABI], header->e_ident[EI_ABIVERSION], header->e_type,
			header->e_entry);
}

/**
 * main - Entry point of the program.
 * @ac: Argument count.
 * @av: Array of argument strings.
 * Return: 0 on success, 98 on failure.
 */
int main(int ac, char **av)
{
	if (ac != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", av[0]);
		exit(98);
	}

	int fd, n;
	Elf64_Ehdr header;

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Cannot open file\n");
		exit(98);
	}

	n = read(fd, &header, sizeof(header));
	if (n == -1)
	{
		dprintf(2, "Error: Cannot read file\n");
		close(fd);
		exit(98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(2, "Error: Not an ELF file\n");
		close(fd);
		exit(98);
	}

	display_elf_header_info(&header);
	close(fd);
	return (0);
}
