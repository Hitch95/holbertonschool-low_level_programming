#include "main.h"
#include <assert.h>

/**
 * swap_int - check the code;
 * @a: Take an integer Value;
 * @b: Take an integer Value;
 * Return: Always 0;
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
