#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - prints number arguments passed
 *@separator:  is the pointer to a string to be printed
 *@n: unsigned integer that specifies the number of intergers
 *Print a new line at the end of your function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}

	printf("\n");
	va_end(ap);
}
