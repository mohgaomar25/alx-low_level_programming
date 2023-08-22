#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

int _putchar(char c);

/**
 * main - Entry point, generates a valid password for 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sum = 0x5a;

	srand(time(NULL)); /* Seed the random number generator with current time */

	for (i = 0; sum < 0x5f; i++)
	{
		int r = rand() % 82 + 43; /* Generate a random ASCII character between 43 and 124 */
		_putchar(r);             /* Print the generated character */
		sum += r;                /* Update the sum */
	}

	_putchar(0x5f - sum); /* Print the last character to make the sum 0x5f */

	return (0);
}

int _putchar(char c)
{
	return write(1, &c, 1);
}
}
