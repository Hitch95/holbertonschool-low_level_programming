#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 * @src : original string value;
 * @dest: copy of the "src" pointer;
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptr);
}
