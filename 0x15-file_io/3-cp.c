#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: 0 on success, or the appropriate error code on failure.
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to, rd_bytes, wr_bytes;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2,"Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	do {
		rd_bytes = read(fd_from, buffer, 1024);
		if (rd_bytes == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		wr_bytes = write(fd_to, buffer, rd_bytes);
		if (wr_bytes == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (rd_bytes > 0);

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
