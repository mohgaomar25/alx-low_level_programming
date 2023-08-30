#include "main.h"

/**
 * _puts_recursion - Prints a string recursively followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		_putchar('\n'); /* Print a new line */
	       	return;
	}
	else
	{
		_putchar(*s); /* Print the current character */
		_puts_recursion(s + 1); /* Recur with the rest of the string */
	}
}

