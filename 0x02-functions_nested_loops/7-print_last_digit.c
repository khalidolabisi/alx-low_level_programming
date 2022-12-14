#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @l: data inputted
 * Return: last ten digit of the set
 */

int print_last_digit(int l)
{
	int a;

	if (l < 0)
		l = -l;
	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
