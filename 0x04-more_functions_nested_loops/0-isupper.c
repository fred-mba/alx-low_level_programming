#include "main.h"

/**
*_isupper - checks for uppercase character
*@c: character initialization
*
*Return: 'return 1 if c is upper and 0 for code success.'
*/

int _isupper(int c)
{
	if (c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
