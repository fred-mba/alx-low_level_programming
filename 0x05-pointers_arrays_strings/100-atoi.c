#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Description: Numbers in the string can be preceded by an infinite
 * number of characters.
 * You need to take into account all -/+ signs before the number.
 * If there are no numbers in the string, return 0.
 * No need to check for overflow.
 * Not allowed to hard-code special values.
 * Return: return the generated output
 */

int _atoi(char *s)
{
	int i = sign = output = 0;

	/*Handles the white spaces*/
	while (s[i] == '\0')
	{
		if (s[i] == '-') /*Handle -ve sign*/

			sign *= -1;


		if (s[i] >= '0' && s[i] <= '9')
		{
			output *= 10;		/*generating the result*/
			output -= (s[i] - '0');
		}
		++i;
	}
	result *= sign;
	return (result);
}
