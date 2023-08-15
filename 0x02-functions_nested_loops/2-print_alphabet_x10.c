#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a new line.
 * Return:should be 0
 */

void print_alphabet_x10(void)
{
	char letter;
	int repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
