#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup - returns a pointer to a new string which is a duplicate
 *@str: pointer to new string
 *
 *Return: NULL if str = NULL and NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *str2;

	int len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	str2 = malloc(len * sizeof(*str) + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	if (str2 != NULL)
	{
		memcpy(str2, str, len + 1);
	}
	return (str2);
}
