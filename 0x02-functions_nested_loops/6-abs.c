#include "main.h"

/**
*_abs - computes the absolute value of an integer. An absolute \
*	is non-negative value without regarding the sign.
*@q: assigned variable type
*Return: return the value of n
*/

int _abs(int q)
{
	if (q < 0)
	{
		return (q * -1);
	}
	else
	{
		return (q);
	}
}
