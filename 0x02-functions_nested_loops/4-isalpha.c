#include "main.h"

/**
 * _isalpha - checks for char character
 * @c: char to be reviewed
 *
 * Return: 1 if char is a lower or uppe letterr, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
		return (1);
	else
		return (0);
}
