#include "main.h"

/**
 * is_prime_recursive - Helper function to check primality recursively.
 * @n: The number to check.
 * @divisor: The current divisor.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	/* Base case: n is 0 or 1 */
	if (n <= 1)
	{
		return (0);
	}

	/* Base case: n is divisible by divisor */
	if (n % divisor == 0)
	{
		if (n == divisor)
		{
			return (1); /* Itself is a divisor (prime) */
		}
		else
		{
			return (0); /* Divisible by other than 1 and itself (not prime) */
		}
	}

	/* Recur with the next divisor */
	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* 0 and 1 are not prime */
	}

	/* Call the recursive helper function starting with divisor 2 */
	return (is_prime_recursive(n, 2));
}
