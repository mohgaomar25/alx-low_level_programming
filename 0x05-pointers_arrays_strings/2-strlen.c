#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: string that calculate the length.
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
