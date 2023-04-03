#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *Description: returns the length of initial substring str1 that is
 *	is made up of characterscontained in pointed string str2.
 *@accept: str2 pointer
 *@s: str1 pointer
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int num_byt = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				num_byt++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0') /*end of iteration*/
		{
			break;
		}
		++i;
	}
	return (num_byt);
}
