#include "main.h"

/**
*more_numbers - prints 10 times the numbers from 0-14
*/

void more_numbers(void)
{
	int t, n;

	for (t = 1; t <= 10; t++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
