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
	int i = 0;
	int sign = 1;
	int output = 0;
	int digit;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		++i;
	}

	if (s[i] == '-')
	{
		sign = -1;
		++i;
	}
	else if (s[i] == '+')
	{
		++i;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		output = output * 10 - digit;
		++i;
	}
	return (sign * output);
}
