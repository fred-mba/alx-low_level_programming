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
	int sign = 1;
	unsigned int result = 0;
	int num = 0;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s == '+')
			; /* ignore + sign */
		else if (*s >= '0' && *s <= '9')
		{
			num = 1;
			result = result * 10 + (*s - '0');
		}
		else if (num)
			break; /* end of number */
		s++;
	}

	return (result * sign);
}
