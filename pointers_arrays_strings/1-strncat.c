#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n bytes from a string to another;
 *@dest: points a char variable;
 *@src: points a char variable;
 *@n: take an integer value;
 * Return: Always 0;
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
