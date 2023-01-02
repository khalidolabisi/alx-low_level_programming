#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array containing board elements
 */

void print_chessboard(char (*a)[8])
{
	int h, l;

	for (h = 0; a[h][7]; h++)
	{
		for (l = 0; l < 8; l++)
			_putchar(a[h][l]);
		_putchar('\n');
	}
}
