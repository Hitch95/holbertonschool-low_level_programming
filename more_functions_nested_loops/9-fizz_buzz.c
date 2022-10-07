#include "main.h"
#include <stdio.h>


/**
* Description:  Resolution of FizzBuzz test;
*/

int main(void)
{
    int i, n ;
    n = 1;
    printf("%d", n)
    for (i = 2; i <= 100; i++)
    {

        if (i % 15 == 0)
            printf (" FizzBuzz");


        else if (( i % 3) == 0)
            printf(" Fizz");

        else if ((i % 5) == 0)
            printf(" Buzz");

        else
            printf(" %d", i);
    }
    printf("\n");
    return (0);
}
