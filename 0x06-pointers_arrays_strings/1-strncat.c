#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes from src to concatenate.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Move dest_ptr to the end of dest */
	while (*dest_ptr != '\0')
		dest_ptr++;

	/* Copy characters from src to the end of dest, up to n characters */
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	/* Add a null terminator at the end of the concatenated string */
	*dest_ptr = '\0';

	return dest;
}
