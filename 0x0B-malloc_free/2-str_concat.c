#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 *str_concat - concatenates two strings using malloc function
 *@s1: 1st string
 *@s2: 2nd string
 *Return: NULL if empty string and on concatation failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = ""; /*Return empty string*/
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = malloc(len1 + len2 + 1);

	if (ptr != NULL)
	{
		memcpy(ptr, s1, len1);
		memcpy(ptr + len1, s2, len2 + 1);
	}
	return (ptr);
}
