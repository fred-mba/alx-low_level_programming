#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints strings, followed by a new line
 *@separator: the string to be printed between the strings
 *@n: the number of strings passed to the function
 *If separator is NULL, don’t print it
 *If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
}
