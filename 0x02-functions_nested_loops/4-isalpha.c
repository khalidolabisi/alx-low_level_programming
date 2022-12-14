#include "main.h"

/**
 * _isalpha - checks for char character
 * @c: char to be reviewed
 *
 * Return: 1 if char is a lower or uppe letterr, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
		return (1);
	else
		return (0);
}
