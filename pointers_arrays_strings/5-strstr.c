#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - Locates a substring.
 * @haystack: type char str
 * @needle: type char sub str
 * Return: haystack or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
			return (begin);

		haystack = begin + 1;
	}
	return (NULL);
}
