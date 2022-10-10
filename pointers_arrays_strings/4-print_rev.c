#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - check the code;
 * @s: Take a string as value;
 * Return: Always 0;
 */

void print_rev(const char *s)
{
	int i, a = strlen(s);

	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
