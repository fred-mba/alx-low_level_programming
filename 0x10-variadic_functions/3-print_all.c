#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - print char type element passed to va_list
 * @c: argument passed to function
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_str - print string from va_list
 * @s: string passed to function
 */
void print_str(va_list s)
{
	char *p;

	p = va_arg(s, char *);
	if (p == NULL)
		printf("(nil)");
	printf("%s", p);
}

/**
 * print_float - print float type from va_list
 * @f: double passed to function
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_int - print int type element from va_list
 * @tin: integer passed to function
 */
void print_int(va_list tin)
{
	printf("%d", va_arg(tin, int));
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
	char *separator;

	specifier list[] = {
		{ "c", print_char },
		{ "f", print_float },
		{ "s", print_str },
		{ "i", print_int }
	};

	i = 0;
	separator = "";
	va_start(ap, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *list[j].type)
			{
				printf("%s", separator);
				list[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
