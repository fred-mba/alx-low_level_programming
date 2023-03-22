#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints all natural numbers from n to 98 followed by a new line.
*@n: starting point. It is the general value for numbers below and above 98
*
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		/*letter i for my case means input number*/
		/*n is the original assigned number*/
		for (i = n; i <= 98; ++i)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			/*incase the input number is less than 98, increase the order*/
			{
				printf("%d, ", i);
			}
		}
	}
	/*Satisfy the condition if the number is greater than 98*/
	else
	{
		for (i = n; i >= 98; --i)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
}
