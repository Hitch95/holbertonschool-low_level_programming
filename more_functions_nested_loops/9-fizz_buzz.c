#include "main.h"
#include <stdio.h>


/**
* Description:  Resolution of FizzBuzz test;
*/

int main(void)
{
    int i, n ;
    n = 100;

    for (i = 1; i <= n; i++)
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
