/**
 * C program to print multiplication table of a number
 */

#include "main.h"

void times_table(void)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		int j;
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
		}
	}
	_putchar('\n');
}
