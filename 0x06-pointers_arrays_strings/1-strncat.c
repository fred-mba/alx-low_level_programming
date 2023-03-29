#include "main.h"

/**
 *_strncat - concatenates two strings
 *Description: it will use at most n bytes from src
 *src does not need to be null-terminated if it
 *	contains n or more bytes
 *@src: string source
 *@dest: destination buffer
 *@n: input nth number
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/*move to the end of the destination string*/
	/*i point to the terminating null character in dest*/
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = ('\0');
	return (dest);
}
