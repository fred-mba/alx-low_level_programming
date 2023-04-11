#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars, and initializes it
 *		with a specific char
 *@size: size of the array
 *@c:character to be initialized in the array
 *
 *Return:NULL if size = 0 & NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(*ptr));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
