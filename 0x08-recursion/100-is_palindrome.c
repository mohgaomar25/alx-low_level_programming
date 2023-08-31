#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: Pointer to the string to calculate the length of.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - Helper function to check if a string is a palindrome.
 * @s: Pointer to the string to check.
 * @l: Position of the character to compare.
 * Return: 1 if palindrome, 0 otherwise.
 */
int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the string to check.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
