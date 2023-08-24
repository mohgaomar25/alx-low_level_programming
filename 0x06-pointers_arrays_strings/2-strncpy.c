#include "main.h"

/**
 * _strncpy - Copies up to n characters from the source string to destination.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy.
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill remaining characters in dest with null terminators */
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}
