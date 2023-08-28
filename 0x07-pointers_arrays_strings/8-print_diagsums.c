#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix (2D array).
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, primary_diag = 0, secondary_diag = 0;

	for (i = 0; i < size; i++)
	{
		primary_diag += *(a + i * size + i);
		secondary_diag += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", primary_diag, secondary_diag);
}
