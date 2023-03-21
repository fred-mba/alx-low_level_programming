#include "main.h"

/**
*_islower - checks if the character is a lower case
*@c: the character on test
*
*Return: return 1 for lowercase or 0 for uppercase
*/

int _islower(int c)
{
	if (!(c <= 97 || >= 122))
	{
		return(1);
	}

	return (0);
}
