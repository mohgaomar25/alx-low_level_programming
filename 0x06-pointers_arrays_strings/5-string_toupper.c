#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')  // Check if character is lowercase
		{
			*ptr = *ptr - ('a' - 'A');   // Convert to uppercase
		}
		ptr++;
	}

	return str;
}
