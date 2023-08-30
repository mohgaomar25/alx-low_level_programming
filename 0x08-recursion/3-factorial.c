#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number for which to calculate the factorial.
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	/* Base case: Factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Error case: n is negative */
	if (n < 0)
	{
		return (-1);
	}

	/* Recur with n-1 and multiply by n */
	return (n * factorial(n - 1));
}
