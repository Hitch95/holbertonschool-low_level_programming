#include "main.h"
#include <stdio.h>

/**
 * main - check the code;
 * @s: Enter a string as value;
 * Return: Always 0;
 */

void rev_string(char *s)
{
	 char revstr[10];
	 char *stptr = s;
	 char *rvptr = revstr;
	 int i = -1;

	 while(*stptr)
	 {
		 stptr++;
		 i++;
	 }

	 while (i >= 0)
	 {
		 stptr--;
		 *rvptr = *stptr;
		 rvptr++;
		 --i;
	 }

	 *rvptr='\0';
	 puts(revstr);
}
