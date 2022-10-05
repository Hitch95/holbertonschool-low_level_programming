#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabetChar;

	for (alphabetChar = 'a'; alphabetChar <= 'z'; alphabetChar++)
	{
		_putchar(alphabetChar);
	}
	_putchar('\n');
}
