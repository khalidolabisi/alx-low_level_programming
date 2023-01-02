#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix to be summed
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int r, j = 0, t = 0;

	for (r = 0; r < size; r++)
	{
		j += a[r];
		t += a[size - r - 1];
		a += size;
	}
	printf("%d, ", j);
	printf("%d\n", t);
}
