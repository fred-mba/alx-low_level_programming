#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number input
 *Not allowed to use arrays
 *Not allowed to use malloc
 *Not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /*using recursion*/
	_putchar((n & 1) ? '1' : '0');
}
