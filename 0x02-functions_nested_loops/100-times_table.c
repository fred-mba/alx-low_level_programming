#include "main.h"
#include <stdio.h>

/**
*print_times_table - prints the n times table, starting with 0
*
*@n: table number
*/

void print_times_table(int n)
{
	int column, multiplier, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	/*prints the times table*/
	for (column = 0; column <= n; column++)
	{
		for (multiplier = 0; multiplier <= n; multiplier++)
		{
			result = column * multiplier;
			printf("%3d", result);
			if (multiplier != n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
