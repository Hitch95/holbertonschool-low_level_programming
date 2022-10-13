#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the lenght of a prefix substring;
 * @s: type char returns the number of bytes;
 * @accept: bytes from accept;
 * Return: return length;
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	if ((s == NULL) || (accept == NULL))
		return (length);

while (*s && strchr(accept, *s++))
{
	length++;
}
return (length);
}
