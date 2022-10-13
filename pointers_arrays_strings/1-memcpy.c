#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memcpy - copies memory area;
 * @dest: destination memory area;
 * @src: memory area to copy from;
 * @n: number of bytes to copy;
 *
 * Return: pointer to dest;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *source_char = (char *)src;
	char *destination_char = (char *)dest;

	for (i = 0; i < n; i++)
		destination_char[i] = source_char[i];

	return (0);
}
