#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		int j;
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
