#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: string pointer
 *Not allowed to use switch
 *Not allowed to use any ternary operation
 *Can only use one if in your code
 *Return: s
 */

char *leet(char *s)
{
	int i, j;

	char letr[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letr[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
