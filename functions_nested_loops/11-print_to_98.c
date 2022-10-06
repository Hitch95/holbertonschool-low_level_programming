#include <stdio.h>
/**
 *
 *
 */
int print_to_98(int n, int end)

{
	end = 98;

	while (n <= end)
	{
		printf("%d, ", n);
		n++;
	}

	while (n >= end)
	{
		printf("%d, ", n);
		n--;
	}

	return (0);
}
