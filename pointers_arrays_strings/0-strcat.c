#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - check the code, concatenate the strings;
 * @src: String number one;
 * @dest: String number two;
 * Return: Always 0;
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
