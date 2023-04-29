#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - calculate the sum of all elements passed to it.
 *@n: specifies the number of arguments that follow.
 *The ellipsis(`...`) indicates the function can accept any number
 *	of arguments.
 *Return: summation of the elements
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
