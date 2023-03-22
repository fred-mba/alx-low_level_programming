#include "main.h"

/**
*print_sign - prints the sign of a number
*@n: a rando choice variable
*
*Return: return 1 and prints + if n is greater than zero \
*	- return 0 and prints 0 if n is zero \
*       - return -1 and prints - if n if less than ero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	esle
		_putchar('-');
		return (-1);
}
