#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @l: data inputted
 * Return: last ten digit of the set
 */

int print_last_digit(int l)
{
	int ld = l % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');
	return (0);
}
