#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: prefix to be measured
 * Return: the number of bytes in s which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				bytes++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
