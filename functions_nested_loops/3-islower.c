#include "main.h"
/**
 * _islower - Entry point
 *@c: take the integer value of the character
 * Return: Always 0 (Success)
 */
int _islower(int alphabetChar)
{

	if (alphabetChar >= 97 && alphabetChar <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
