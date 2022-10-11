#include<stdio.h>
#include<string.h>

/**
 * puts_half - check the code;
 * @str: Please enter a string value;
 * Return: Always 0;
 */

void puts_half(char *str)
{
	int length = strlen(str);
	char rightHalf[100];
	int mid, i, k;

	length = strlen(str);

	mid = length / 2;

	for (i = mid, k = 0; i <= length; i++, k++)
	{
		rightHalf[k] = str[i];
	}
	puts(rightHalf);
}
