#include "main.h"

/**
 *_strncpy - copies specified number of characters to destination
 *Description: if the dest array is empty, return NULL
 *		else, start from the beginning of dest
 *@src: string source
 *@dest: destination buffer
 *@n: index number
 *Return: the copied string in dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != ('\0'))
	{
		dest[i] = src[i];
		++i;
	}
	/*continue iterating over the dest until n char have been copied*/
	while (i < n)
	{
		dest[i] = ('\0');
		++i;
	}
	return (dest);
}
