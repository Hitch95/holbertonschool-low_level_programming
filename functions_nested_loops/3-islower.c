#include "main.h"

/**
 * _islower - Entry point;
 * @alphabetChar: take any character;
 * Return: 0 or 1 depend of the result;
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
