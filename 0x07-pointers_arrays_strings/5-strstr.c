#include "main.h"

/**
 * _strstr - first occurence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *u, char *t;

	while (*haystack != '\0')
	{
		u = haystack;
		t = needle;

		while (*haystack != '\0' && *t != '\0' && *haystack == *t)
		{
			haystack++;
			t++;
		}
		if (t == '\0')
			return (u);
		haystack = u + 1;
	}
	return (0);
}
