#include <stdio.h>

/**
 * print_to_98 - check the code;
 * @n: enter an integer value;
 * @end: last integer we want, 98 in our case;
 * Return: 0 (always success);
 */

int print_to_98(int n, int end)

{
	end = 98;

	while (n < end)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > end)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", n);
	return (0);
}
