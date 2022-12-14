#include "main.h"

/**
 * _isalpha - checking for char character
 * @c: char to be reviewed
 *
 * Return: 1 if char is lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') | | (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
