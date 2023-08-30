#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 * Return: The natural square root of n.
 */
int sqrt_recursive(int n, int guess)
{
	/* Base case: square of guess is n */
	if (guess * guess == n)
	{
		return (guess);
	}

	/* Base case: no natural square root */
	if (guess * guess > n)
	{
		return (-1);
	}

	/* Recur with an incremented guess */
	return (sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		return (-1);
	}

	/* Call the helper function starting with a guess of 0 */
	return (sqrt_recursive(n, 0));
}
