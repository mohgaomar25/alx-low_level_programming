#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int first = 1, second = 2, next, count;

	printf("%ld, %ld", first, second);

	for (count = 2; count < 50; count++)
	{
		next = first + second;
		printf(", %ld", next);

		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
