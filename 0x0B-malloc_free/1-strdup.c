#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string,
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	dup_str = malloc(sizeof(char) * (length + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
