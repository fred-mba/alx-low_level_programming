#include "main.h"

/**
*print_numbers - prints an integer
*Description: an integer is a whole number
*
*Not allowed to use _putchar and long
*Not allowed to use arrays or pointers
*/

void print_number(int n)
{
	if (n < 0) /*negative integers*/
	{
		_putchar('-');
		n = -n;
	}
	if(n / 10 != 0) /*recursive case*/
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');  /*prints the digit*/
}
