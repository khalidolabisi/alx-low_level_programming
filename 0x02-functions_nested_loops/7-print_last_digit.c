#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @l: data inputted
 * Return: last ten digit of the set
 */

int print_last_digit(int l)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
