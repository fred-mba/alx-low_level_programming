#include <stdlib.h>

/**
 *array_range - creates an array of integers.
 *@min: starting value
 *@max: ending value
 *If min > max, return NULL
 *If malloc fails, return NULL
 *Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, range;
	int *arr_int;

	if (min > max)
		return (NULL);

	range = (max - min + 1);
	arr_int = malloc(sizeof(int) * range);

	if (arr_int == NULL)
		return (NULL);

	for (i = 0; i < range; min++, i++)
	{
		arr_int[i] = min;
	}
	return (arr_int);
}
