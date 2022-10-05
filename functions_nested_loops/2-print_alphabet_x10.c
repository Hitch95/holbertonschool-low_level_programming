#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alphabetChar;
	int multiplicateur;
	for (multiplicateur = 0; multiplicateur <= 9; multiplicateur++)
	{
		for (alphabetChar = 'a'; alphabetChar <= 'z'; alphabetChar++)
		{
			_putchar(alphabetChar);
		}
	_putchar('\n');
	}
}
