#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compare strings char. by char. using ASCII value of the chars.;
 * @s1: Enter the string number one;
 * @s2: Enter the string number two;
 * Return: Always 0;
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
