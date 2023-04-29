#include "dog.h"
#include <stddef.h>

/**
 *init_dog - function that receives input
 *@name: string for dogs name
 *@age: dogs age
 *@owner: string for dog's owner
 *@d: struct pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
