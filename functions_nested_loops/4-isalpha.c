#include "main.h"
/**
 * islower - Entry point
 * take the integer value of the character
 * Return 0 or 1
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
