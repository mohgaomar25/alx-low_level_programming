#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to search within.
 * @needle: Pointer to the substring to locate.
 *
 * Return: A pointer to the beginning of the located substring within @haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return haystack;  /* Substring found */
		}

		haystack++;
	}

	return 0;  /* Substring not found */
}
