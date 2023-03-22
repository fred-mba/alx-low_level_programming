#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints all natural numbers from n to 98 followed by a new line.
*@n: starting point
*
*/

void print_to_98(int n)
{
	int k;

	while (k <= 98)
	{
		if (k < 98)
		{
			printf("%d, ", k);
			++k;
		}
		else if (k == 98)
		{
			printf("%d\n", k);
		}
		else
		{
			printf("%d, ", 98);
		}
	}
}
