#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix to be summed
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int y, e = 0, s = 0;

	for (y = 0; y < size; y++)
	{
		e += a[y];
		a += size;
	}
	a -= size;

	for (y = 0; y < size; y++)
	{
		s += a[y];
		a -= size;
	}
	printf("%d, %d\n", e, s);
}
