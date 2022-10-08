#include "main.h"

/**
 * print_sign - check the code;
 *@n: take the integer value of the character;
 * Return: 1, 0 or -1 depend of the result;
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{

	_putchar('0');
	return (0);

	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
