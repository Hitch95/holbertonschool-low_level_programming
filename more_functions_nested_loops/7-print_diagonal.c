#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(' ');
		n--;
	}
	_putchar('\\');
	_putchar('\n');
}
