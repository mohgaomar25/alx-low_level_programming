#include "main.h"

/**
 * _puts_recursion - Prints a string recursively followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
