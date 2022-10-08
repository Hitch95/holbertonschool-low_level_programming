#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - check the code;
 *@r: take an integer value;
 * Return: Always 0;
 */

int print_last_digit(int r)
{

	r = r % 10;
	r = abs(r);

	_putchar(r + '0');
	return (r);
}
