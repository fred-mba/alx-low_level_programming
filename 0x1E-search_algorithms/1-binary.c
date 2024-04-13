#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: If value is not present in array or if array is NULL,
 *	function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, mid, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(",");
		}

		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;

		else if (array[mid] > value)
			right = mid - 1;

		else
			return (mid);
	}

	return (-1);
}
