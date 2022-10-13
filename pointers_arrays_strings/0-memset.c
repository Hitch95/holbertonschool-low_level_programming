#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @s: memory area destination
 * @b: constant byte
 * @n: length of byte memory area
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
