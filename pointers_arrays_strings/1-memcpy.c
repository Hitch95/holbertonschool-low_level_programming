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
	char *source_char = (char *)src;
	char *destination_char = (char *)dest;

	if ((destination_char != NULL) && (source_char != NULL))
	{
		while (n)
		{
			*(destination_char++) = *(source_char++);
			--n;
		}
	}
}
