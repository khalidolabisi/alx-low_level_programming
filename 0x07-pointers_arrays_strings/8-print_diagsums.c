#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix to be summed
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int y;

	unsigned int f, w;

	f = 0;
	w = 0;

	for (y = 0; y < size; y++)
	{
		f += a[(size * y) + y];
		w += a[(size * (y + 1)) - (y + 1)];
	}
	printf("%d, %d\n", f, w);
}
