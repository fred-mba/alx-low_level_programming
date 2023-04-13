#include <stdlib.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the memory space that need to be resized
 *@old_size: current size of the memory block
 *@new_size: is the new size, in bytes of the new memory block
 *If new_size > old_size, the “added” memory should not be initialized
 *If new_size == old_size do not do anything and return ptr
 *
 *Return: NULL if If new_size is equal to zero, and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *mem_cpy;
	unsigned int i;

	if (new_size == old_size)

		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);

	}

	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	mem_cpy = ptr;
	for (i = 0; i < old_size; i++)

		p[i] = mem_cpy[i];
	free(ptr);

	return (p);
}
