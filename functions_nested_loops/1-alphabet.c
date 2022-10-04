/**
 * C program to print alphabets in lowercase
 */
#include <stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void lowercaseAlphabets()
{
    for (int alphabetChar = 97; alphabetChar <= 122; ++alphabetChar)
        printf("%c", alphabetChar);
    printf("\n");
}

/**
 * Driver Program
 */
int main(void)
{
    lowercaseAlphabets();
    return 0;
}
