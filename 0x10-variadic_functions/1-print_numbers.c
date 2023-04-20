#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_numbers - prints number arguments passed
 *@separator:  is the pointer to a string to be printed
 *@n: unsigned integer that specifies the number of intergers
 *Print a new line at the end of your function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int *p;
	va_list ap;

	if (n == 0)
	{
		return;
	}
	p = (int *)malloc(n * sizeof(int));
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		p[i] = va_arg(ap, int);
		printf("%d", p[i]);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
	free(p);
}
