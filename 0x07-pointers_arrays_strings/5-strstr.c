#include "main.h"

/**
 * _strstr - first occurence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	int u;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		u = 0;
		if (haystack[u] == needle[u])
		{
			do {
				if (needle[u + 1] == '\0')
					return (haystack);
				u++;
			} while (haystack[u] == needle[u]);
		}
		haystack++;
	}
	return ('\0');
}
