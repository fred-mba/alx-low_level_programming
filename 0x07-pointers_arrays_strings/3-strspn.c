#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *Description: returns the length of initial substring str1 that is
 *	is made up of characterscontained in pointed string str2.
 *@accept: string pointer
 *@s: str1 pointer
 *Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int num_byt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num_byt++;
				break;
			}
		}
		if (accept[j] == '\0') /*end of string*/

			break;
	}
	return (num_byt - 2);
}
