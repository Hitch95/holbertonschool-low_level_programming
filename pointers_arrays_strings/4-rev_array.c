#include "main.h"
#include <stdio.h>

/**
 * swap - create a swap function for use it in reverse_array below;
 * @y: integer value;
 * @z: integer value;
 * Return: Always 0;
 */

void swap(int *y, int *z)
{
	int temp;

	temp = *y;
	*y = *z;
	*z = temp;
}

/**
 * reverse_array - print an array of integers;
 * @a: an array of integers;
 * @n: the number of elements to swap;
 * Return: Always 0;
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		swap(&a[i], &a[(n - 1) - i]);
		i++;
	}
}
