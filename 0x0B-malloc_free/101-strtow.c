#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *strtow - splits a string into words
 *@str: string pointer
 *
 *Return: NULL if str == NULL or str == ""
 *If the function fails, it should return NULL
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k;
	int len = strlen(str);

	words = malloc(sizeof(char *) * len + 1);
	for (i = 0; i < len; ++i)
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			for (j = i; j < len && str[j] != ' '; j++)
				;
			for (k = i; k < j; k++)
			{
				printf("%c", str[k]);
			}
			printf("\n");
			i = j;
		}
	}
	return (words);
}
