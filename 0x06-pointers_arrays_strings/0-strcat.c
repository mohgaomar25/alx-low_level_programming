#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	/* Move dest_ptr to the end of dest */
	while (*dest_ptr != '\0')
		dest_ptr++;

	/* Copy characters from src to the end of dest */
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	/* Add a null terminator at the end of the concatenated string */
	*dest_ptr = '\0';

	return dest;
}
