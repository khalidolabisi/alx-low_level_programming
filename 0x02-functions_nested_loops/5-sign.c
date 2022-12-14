include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number of sign to be printed
 * Return: 1 if n is greater than zero
 * 0 if n is equal to zero
 * -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
