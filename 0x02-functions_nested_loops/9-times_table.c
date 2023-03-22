#include "main.h"
/**
*times_table - prints times table starting with 0
*
*/

void times_table(void)
{
	int column, row, number;

	for (column = 0; column <= 9; column++)
	{
		for (row = 0; row <= 9; row++)
		{
			number = column * row;
			if (row != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
				_putchar((number % 10) + '0');
			}
			else if (number < 10 && row != 0)
			{
				_putchar(' ');
				_putchar((number % 10) + '0');
			}
			else
				_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
