#include "main.h"
#include <stddef.h>

/**
 * is_palindrome_recursive - Helper function to check if a string is palindrome recursively.
 * @s: The string to check.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 * Return: 1 if the substring is palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return 1; /* Base case: empty string or single character is a palindrome */
	}

	/* Compare characters at start and end indices */
	if (s[start] != s[end])
	{
		return 0; /* Not a palindrome */
	}

	/* Recur with updated indices */
	return is_palindrome_recursive(s, start + 1, end - 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (s == NULL)
	{
		return 0; /* Null pointer is not a palindrome */
	}

	/* Calculate the length of the string */
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	
	/* Call the recursive helper function */
	return is_palindrome_recursive(s, 0, length - 1);
}
