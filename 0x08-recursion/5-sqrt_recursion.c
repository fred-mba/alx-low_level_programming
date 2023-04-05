#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: natural number
 *Return: the squareroot of a natural number
 */

int _sqrt_recursion(int n)
{
	return (Mysqrt(n, 1));
}

/**
 *Mysqrt - function to assist in finding the squareroot
 *@x: number to be determined if it is a squareroot
 *@y: Number to compare against x
 *Return: -1 If y is lower than 0
 */

int Mysqrt(int x, int y)
{
	int sqr;

	sqr = y * y;
	if (sqr > x)
	{
		return (-1);
	}
	else if (sqr == x)
	{
		return (y);
	}
	else
	{
		return (Mysqrt(x, y + 1));
	}
}
