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
	int i, j;

	char holder1[] = "nopqrstuvwxyzabcdefghijklm";
	char holder2[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char var = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; holder2[j] != '\0' && var == 0; j++)
		{
			if (s[i] == holder2[j])
			{
				s[i] = holder1[j];
				var = 1;
			}
		}
	}
	return (s);
}
