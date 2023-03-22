#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints all natural numbers from n to 98 followed by a new line.
*@n: starting point
*
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		/*letter i for my case means input number*/
		/*n is the original assigned number*/
		for (int i = n; i <= 98; ++i)
		{
			if (i == 98)
			{
				printf("%d\n", n);
			}
			else
			/*incase the input number is less than 98, increase the order*/
			{
				printf("%d\n, ", i);
			}
		}
	}
	/*Satisfy the condition if the number is greater than 98*/
	else
	{
		for (int i = n; i >= 98; --i)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
