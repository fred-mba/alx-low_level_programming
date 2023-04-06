#include "main.h"
/**
 *wildcmp - compares two strings
 *@s1: 1st string
 *@s2: 2nd string
 *Return: 1 if the strings can be considered identical,
 *	otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	/*for s1 & s2 is empty*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	/*If there is wildcard in s2, move to the next character and compare*/
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
