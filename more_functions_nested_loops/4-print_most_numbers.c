#include "main.h"

/**
 * main - check the code
 *
 * Return: 0 to 9 without 2 & 4;
 */

void print_most_numbers(void)

{

	int i;

	for (i = 48; i < 58; i++)

	{
		if (i != 48 && i != 52)

		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
