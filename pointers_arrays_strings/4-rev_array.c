#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array of integers;
 * @a: an array of integers;
 * @n: the number of elements to swap;
 * Return: nothing;
 */

void swap(int *y, int *z){
    int temp;
    temp = *y;
    *y = *z;
    *z = temp;
}

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		swap(&a[i], &a[(n - 1) - i]);
		i++;
	}
}
