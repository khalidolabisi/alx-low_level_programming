#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix to be summed
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int y, f, w;

	f = 0;
	w = 0;

	for (y = 0; y < (size * size); y++)
	{
		if (y % (size + 1) == 0)
			f += a[y];
		if (y % (size - 1) == 0 && y != 0 && y < size * size - 1)
			w += a[y];
	}
	printf("%d, %d\n", f, w);
}
