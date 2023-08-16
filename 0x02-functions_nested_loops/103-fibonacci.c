#include <stdio.h>

/**
 * main - Calculates and prints the sum of even Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int first = 1, second = 2, next = 0, sum = 2;

	while (next <= 4000000)
	{
		next = first + second;
		if (next % 2 == 0)
			sum += next;

		first = second;
		second = next;
	}

	printf("%ld\n", sum);

	return (0);
}
