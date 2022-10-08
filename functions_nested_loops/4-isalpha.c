#include "main.h"

/**
 * _isalpha - Entry point;
 * @alphabetChar: take the integer value of the character;
 * Return: 0 or 1 depend of the result;
 */

int _isalpha(int alphabetChar)
{

	if (alphabetChar >= 65 && alphabetChar <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
