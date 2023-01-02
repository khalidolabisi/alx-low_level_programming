#include "main.h"

/**
 * _strchr - locates a character in string
 * @c: character to be located
 * @s: string to be searhed
 * Return: If c is found - a pointer to the first occurence
 * If c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
