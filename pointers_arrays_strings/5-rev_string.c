#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code;
 * @s: Enter a string as value;
 * Return: Always 0;
 */

void rev_string(char *s)
{
	int length, i;
	char *begin_ptr, *end_ptr, ch;

	length = strlen(s);

	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < length - 1; i++)
		end_ptr++;

	for (i = 0; i < length / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}
}
