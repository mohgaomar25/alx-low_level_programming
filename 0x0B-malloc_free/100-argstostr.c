#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the argument count
 * @av: an array of pointers to the arguments
 *
 * Return: a pointer to a new string containing the concatenated arguments,
 *         or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len + 1; /* Add 1 for the newline character */
		len = 0;
	}

	str = malloc(sizeof(char) * total_len + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0, total_len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[total_len++] = av[i][j];
		str[total_len++] = '\n';
	}

	str[total_len] = '\0';
	
	return (str);
}
