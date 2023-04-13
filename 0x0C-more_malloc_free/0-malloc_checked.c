#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: memory size to allocate of type unsigned int
 *exit with normal termonation value 98 if malloc fails
 *Return: return pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL) /*if malloc fails*/
	{
		exit(98);
	}
	return (a);
}
