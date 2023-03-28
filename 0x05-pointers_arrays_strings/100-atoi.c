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
 * Return: first integer found in string, either -/+
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int output = 0;

	/*Handles the white spaces*/
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		++i;
	}

	/*Handle sign*/
	if (s[i] == '-')
	{
		sign = -1;
		++i;
	}
	else if (s[i] == '+')
	{
		++i;
	}

	/*processing the result*/
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (output < '0')

			output = output * 10 + (s[i] - '0');
		else
			output = (s[i] - '0') * -1;
		++i;
	}
	return (sign * output);
}
