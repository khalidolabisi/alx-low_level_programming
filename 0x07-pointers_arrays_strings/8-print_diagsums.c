#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix to be summed
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int d = 0, j = 0, m = 0;

	for (d = 0; d < size; d++)
	{
		j += *(a + (size * d + 1));
		m += *(a + (size * d + size - 1 - d));
	}
	printf("%d, %d\n", j, m);
}
