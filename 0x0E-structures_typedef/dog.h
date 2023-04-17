#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dogs information
 *@name: dogs name
 *@age: age in decimal
 *@owner: dogs owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
