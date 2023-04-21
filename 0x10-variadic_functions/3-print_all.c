#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - print char type element passed to va_list
 * @list: argument passed to function
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - print string from va_list
 * @list: string passed to function
 */
void print_str(va_list list)
{
	char *p;

	p = va_arg(list, char *);
	if (p == NULL)
		p = "(nil)";
	printf("%s", p);
}

/**
 * print_float - print float type from va_list
 * @list: double passed to function
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_int - print int type element from va_list
 * @list: integer passed to function
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 *print_all - takes format string and a variable of arguments
 *      and prints them out to standard output
 *@format: specifies the format of the output
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list ap;
	char *sep;

	specifiers[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	i = 0;
	sep = "";
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *valid_types[j].valid)
			{
				printf("%s", separator);
				valid_types[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
