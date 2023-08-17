#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)  // Check if 'a' is the largest or equal
	{ 
		largest = a;
	}
	else if (b >= a && b >= c)  // Check if 'b' is the largest or equal
	{
		largest = b;
	}
	else
	{
		largest = c;  // If neither 'a' nor 'b' is the largest, 'c' must be the largest
	}

	return (largest);
}
