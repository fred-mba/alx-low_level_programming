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

	if (n <= 0)
	{
		return; /*For invalid input*/
	}

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}
