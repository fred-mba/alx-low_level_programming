#include "main.h"

/**
 *_strcmp - compares two strings
 *Description: compares two strings characters until either
 *		a string ends or a difference is found.
 *@s1: string source
 *@s2: destination buffer
 *Return: 0 if s1 == s2 and 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
			++i;
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
