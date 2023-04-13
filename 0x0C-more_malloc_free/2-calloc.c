#include <stdlib.h>
#include "main.h"

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements you want to allocate in memory
 *@size: size of each member elements in bytes
 *Return: If malloc fails the _calloc returns NULL
 *	If nmeb or size is 0, then _calloc returns zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		s[i] = 0;

	return (s);
}
