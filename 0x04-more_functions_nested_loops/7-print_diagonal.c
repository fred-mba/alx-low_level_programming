#include "main.h"

/**
*print_diagonal - draws a diagonal line on the terminal
*@n: number of diagonals to be printed
*
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
		/*breaks if the condition is met*/
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
