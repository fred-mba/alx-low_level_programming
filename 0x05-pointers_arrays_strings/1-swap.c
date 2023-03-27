#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: 1st variable to swap
 *@b: 2nd variable to swap
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int y = *a;

	*a = *b;
	*b = y;
}
