#include "main.h"

/**
 * print_times_table - prints the time table of the input
 * starting with 0
 * @l: the value to be inputted
 */

void print_times_table(int l)
{
	int n, m, p;

	if (l >= 0 && l <= 15)
	{
	for (n = 0; n <= l; n++)
	{
	_putchar('0');
	for (m = 1; m <= l; m++)
	{
	_putchar(',');
	_putchar(' ');
	p = n * m;
	if (p <= 99)
	_putchar(' ');
	if (p <= 9)
	_putchar(' ');
	if (p >= 100)
	{
	_putchar((p / 100) + '0');
	_putchar(((p / 10)) % 10 + '0');
	}
	else if (p <= 99 && p >= 10)
	{
	_putchar((p / 10) + '0');
	}
	_putchar((p % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
