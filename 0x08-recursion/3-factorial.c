#include "main.h"

/**
 *factorial - returns the factorial of a given number.
 *@n: number to determine its factorial
 *Return: if n < 0, return -1 to indicate error
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
