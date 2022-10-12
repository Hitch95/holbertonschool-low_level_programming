#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - check the code
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	size_t length = strlen(str);
	size_t i;

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
