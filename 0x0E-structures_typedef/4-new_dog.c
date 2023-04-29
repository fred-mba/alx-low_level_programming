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
	int i, j, k;
	char *nm, *own;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	nm = malloc(sizeof(char) * (i + 1));
	if (nm == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	own = malloc(sizeof(char) * (j + i));
	if (own == NULL)
	{
		free(nm);
		free(my_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		nm[k] = name[k];
	for (k = 0; k <= j; k++)
		own[k] = owner[k];

	my_dog->name = nm;
	my_dog->age = age;
	my_dog->owner = own;

	return (my_dog);
}
