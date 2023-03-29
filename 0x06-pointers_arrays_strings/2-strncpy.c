#include "main.h"

/**
 *_strncpy - copies string to destination
 *Description: if the dest array is empty, return NULL
 *		else, start from the beginning of dest
 *@src: string source
 *@dest: destination buffer
 *@n: index number
 *Return: the copied string in dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	if (dest == 0)
	{
		return (0);
	}

	ptr = dest; /*pointing beginning of destination buffer*/
	while (src && n--) /*copy characters in src into array pointed by dest*/
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = ('\0'); /*when encounter null in src, terminate*/
	return (ptr);
}
