#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int l, n, k;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (k = l / 2; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	} else if (l % 2)
	{
		for (n = (l - 1) / 2; n < l - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
