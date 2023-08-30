#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
	{
		return;
	}

	/* Recur with the rest of the string */
	_print_rev_recursion(s + 1);

	/* Print the current character */
	_putchar(*s);
}
