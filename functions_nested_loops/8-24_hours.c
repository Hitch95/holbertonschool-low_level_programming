#include "main.h"

/**
 * jack_bauer - check the code
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 00; hour < 24; hour++)
	{
		for (min = 00; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
