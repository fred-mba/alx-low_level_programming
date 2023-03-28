#include "main.h"
#include <stdio.h>

/**
 *print_array - prints elements of an array of intergers
 *Description: Numbers must be separated by comma followed by space
 *Should be displayed in the same order as they are stored in the array.
 *@a: array of integers
 *@n: nth elements to be printed
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /*print the current element*/

		if (i != n - 1) /*add , and space to all elements but not last one*/
		{
			printf(", ");
		}
	}

	printf("\n");
}
