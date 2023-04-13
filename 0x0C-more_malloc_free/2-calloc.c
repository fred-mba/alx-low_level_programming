#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements you want to allocate in memory
 *@size: size of each member elements in bytes
 *Return: If malloc fails the _calloc returns NULL
 *	If nmeb or size is 0, then _calloc returns zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *n;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		*n = 0; /*memory set to zero*/
	}
	return (n);
}
