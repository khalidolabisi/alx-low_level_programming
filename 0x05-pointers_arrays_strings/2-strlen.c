#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * print the length of the string
 * Return: 0
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
