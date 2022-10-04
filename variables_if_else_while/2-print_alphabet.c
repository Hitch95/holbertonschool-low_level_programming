#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
      /**
       * jumps from 'A'(65) to 'B'(66) to ... in order.
       */
{
char small = tolower(x);
putchar(small);
}
return (0);
}
