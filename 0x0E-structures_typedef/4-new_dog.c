#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - new function that creates new dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: pointer to my_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	free(my_dog);
	return (my_dog);
}
