#include "main.h"
#include <stdlib.h>

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

	if (str == NULL || str == "")
	{
		return (NULL);
	}
