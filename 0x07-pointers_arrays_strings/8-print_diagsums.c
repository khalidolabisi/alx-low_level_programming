#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix to be summed
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int r = 0, j = 0, g, k;

	for (g = 0; g < size; g++)
	{
		k = (g * size) + g;
		r += a[k];
	}
	for (g = 1; g <= size; g++)
	{
		k = (g * size) - g;
		j += a[k];
	}
	printf("%d, %d\n", r, j);
}
