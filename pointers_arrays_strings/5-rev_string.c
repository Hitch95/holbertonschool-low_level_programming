#include "main.h"
#include <stdio.h>

/**
 * main - check the code;
 * @s: Enter a string as value;
 * Return: Always 0;
 */

void rev_string(char *s)
{
	 char reverseString[500];
	 char *stringPointer = s;
	 char *reversePointer = reverseString;
	 int i = -1;

	 while(*stringPointer)
	 {
		 stringPointer++;
		 i++;
	 }

	 while (i >= 0)
	 {
		 stringPointer--;
		 *reversePointer = *stringPointer;
		 reversePointer++;
		 --i;
	 }

	 *reversePointer='\0';
	 puts(reverseString);
}
