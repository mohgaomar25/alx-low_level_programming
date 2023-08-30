#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: The string for which to calculate the length.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
	{
		return (0);
	}

	/* Recur with the rest of the string and add 1 for the current character */
	return (1 + _strlen_recursion(s + 1));
}
