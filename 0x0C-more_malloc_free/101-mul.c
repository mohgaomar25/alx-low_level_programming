#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
