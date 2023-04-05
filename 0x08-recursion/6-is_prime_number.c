#include "main.h"

/**
 *is_prime_number - checks if a number is a prime number
 *@n: determinant number
 *
 *Return: the result at primechecker function
 */

int is_prime_number(int n)
{
	return (primechecker(2, n));
}

/**
 *primechecker - assistant fuction to determine prime number
 *@i: initial number to be tested
 *@n: variable number holder after the modulus
 *Return: returns 1 if the input integer is a prime number,
 *	otherwise return 0.
 */

int primechecker(int n, int i)
{
	if (i % n == 0 || i < 2)
	{
		return (0); /*Not a prime number*/
	}
	else if (n == i - 1)
	{
		return (1);
	}
	else if (i > 1)
	{
		return (primechecker(n + 1, i));
	}
	return (1);
}
