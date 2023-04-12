#include "main.h"
#include <stdlib.h>
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

	words = malloc(sizeof(char *) * (strlen(str) / 2 + 1));

	if (words == NULL)
	{
		return (NULL);
	}
	return (words);
}
