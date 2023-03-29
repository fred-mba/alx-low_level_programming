#include "main.h"

/**
 *_strcat - concatenates two strings
 *Description: appends the src string to the dest string,
 *overwriting the terminating null byte (\0) at the end of dest.
 *
 *@src: text source
 *@dest: text destination
 *
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = ('\0');
	return (dest);
}
