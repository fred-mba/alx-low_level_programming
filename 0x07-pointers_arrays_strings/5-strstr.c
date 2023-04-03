#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *_strstr - finds the 1st occurrence of the substring needle
 *	in the string haystack.
 *The terminating null bytes (\0) are not compared
 *@needle: string 1
 *@haystack: string 2
 *
 *Return: NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, c;

	i = 0;
	c = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + c] != '\0' && haystack[i + c] != '\0'
		       && needle[j + c] == haystack[i + c])
		{
			if (haystack[i + c] != needle[j + c])
				break;
			c++;
		}
		if (needle[j + c] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (NULL);
}
