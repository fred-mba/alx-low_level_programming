#include "main.h"
#include <stdio.h>

/**
 *print_array - prints elements of an array of intergers
 *Description: Numbers must be separated by comma followed by space
 *		Should be displayed in the same order as they are
 *		stored in the array.
 *@a: 1st int variable
 *@n: nth int variable
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n >= 0)
		printf("%d, ", a[i]);

		else
			return;
	}

	printf("\n");
}
