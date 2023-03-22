nclude "main.h"

/**
*_isalpha - checks for alphabetic  character
*@c: the character on test
*
*Return: return 1 if c is lowercase or upper and 0,\
*	otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90)) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
