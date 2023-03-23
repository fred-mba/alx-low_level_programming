#include "main.h"

/**
*print_numbers - prints numbers from 0-9
*
*Return: 0 (success)
*/

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
