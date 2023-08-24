#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A negative, zero, or positive integer if s1 is less than, equal to,
 *         or greater than s2, respectively.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	/* Return the difference of lengths if one string is a prefix of the other */
	return (*s1 - *s2);
}
