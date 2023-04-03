#include "main.h"

/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@src: source
 *@dest: destination buffer
 *@n: number of bytes to be copied
 *Return: copied string in dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && src[i] != ('\0'))
	{
		dest[i] = src[i];
		++i;
	}

	while (i < n)
	{
		dest[i] = ('\0');
		++i;
	}
	return (dest); /*Returns a pointer to dest*/
}
