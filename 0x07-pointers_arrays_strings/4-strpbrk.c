#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 * Return: if a set is matched - a pointer to the matched byte
 * if no set is matvhed - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (j);
		}
		s++;
	}
	return ('\0');
}
