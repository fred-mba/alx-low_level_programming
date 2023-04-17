#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees the memory alloc'd for dog_t
 *@d: dog struct pointer
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
