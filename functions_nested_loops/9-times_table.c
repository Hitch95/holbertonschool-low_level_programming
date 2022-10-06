/**
 * C program to print multiplication table of 0 to 9
 */

#include "main.h"

void times_table(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
		}
	}
	_putchar('\n');
}
