#include "main.h"

/**
*rot13 - encodes a string using rot13
*Description: replaces a letter with the 13th letter
*	after it in the alphabet
*@s: string pointer
*Return: s in rot-13 style
*/

char *rot13(char *s)
{
	int i;

	char holder1[] = "nopqrstuvwxyzabcdefghijklm";
	char holder2[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				holder1[s[i] - 97] : holder2[s[i] - 65];
		}
	}
	return (s);
}
