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
	char *destination_char = (char *) dest;
	const char *source_char = (const char *) src;

	if ((destination_char != NULL) && (source_char != NULL))
	{
		while (n)
		{
			*(destination_char++) = *(source_char++);
			--n;
		}
	}
	return (dest);
}
