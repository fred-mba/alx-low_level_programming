#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *Description: locates the first occurrence in the string s
 *	of any of the bytes in the string accept.
 *@accept: str2 pointer
 *@s: str1 pointer
 *Return: NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; ++i)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
