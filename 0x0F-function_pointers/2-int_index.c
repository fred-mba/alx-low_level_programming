#include "function_pointers.h"

/**
 *int_index -  returns the index of the first element
 *	for which the cmp function does not return 0
 *@array: integer array
 *@size: size of the intege array
 *@cmp: pointer to the function to be used to compare values
 *Return: If no element matches, return -1
 *	If size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	else if (array == NULL || size <= 0 || !(cmp))
	{
		return (-1);
	}
	return (-1);
}
