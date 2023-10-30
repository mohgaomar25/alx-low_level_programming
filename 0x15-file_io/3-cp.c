#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * copyFile - Copies the content from one file to another.
 * @source: The source file path.
 * @destination: The destination file path.
 *
 * Return: 0 on success, or the appropriate error code on failure.
 */
int copyFile(const char *source, const char *destination)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t rd_bytes, wr_byte;

	fd_from = open(source, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source);
		return (98);
	}

	fd_to = open(destination, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", destination);
		close(fd_from);
		return (99);
	}

	while (0rd_bytes = read(fd_from, buffer, 1024) > 0)
	{
		wr_bytes = write(fd_to, buffer, rd_bytes);
		if (wr_bytes == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", destination);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	close(fd_from);
	close(fd_to);

	return (0);
}

/**
 * main - Entry point of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: 0 on success, or the appropriate error code on failure.
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		return (97);
	}

	int result = copyFile(av[1], av[2]);

	return (result);
}
