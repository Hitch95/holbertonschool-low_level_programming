/**
 * times_table - Check the code;
 * Return: Always 0;
 */

#include "main.h"

void times_table(void)
{
	int multiplicand, multiplier, product;

	for (multiplicand = 0; multiplicand <= 9; multiplicand++)
	{
		_putchar('0');

		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			product = multiplicand * multiplier;
			_putchar(',');
			_putchar(' ');

			if (product <= 9)
			{
				_putchar(' ');
				_putchar(product + '0');
			}

			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
