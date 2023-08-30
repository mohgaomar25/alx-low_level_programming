#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	/* Error case: y is negative */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: x raised to the power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recur with x and y-1 and multiply by x */
	return (x * _pow_recursion(x, y - 1));
}
