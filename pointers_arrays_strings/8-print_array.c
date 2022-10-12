#include "main.h"
#include <stdio.h>

/**
 * print_array - Check the code for;
 * @a: Array;
 * @n: The number of elements of the array to be printed;
 * Return: Always 0;
 */

void print_array(int *a, int n)
{
	a = &a[0];

	for (n = 0; n < 5; n++)
		printf("%d ",*(a + n));
}
