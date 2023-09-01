#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* To suppress the "unused parameter" warning */
	printf("%d\n", argc - 1);
	return (0);
}

