#include <stdlib.h>
#include <string.h>

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements you want to allocate in memory
 *@size: size of each member elements in bytes
 *Return: If malloc fails the _calloc returns NULL
 *	If nmeb or size is 0, then _calloc returns zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	memset(a, 0, nmemb * size); /*Memory set to zero*/

	return (a);
}
