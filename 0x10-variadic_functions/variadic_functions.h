#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 *struct specifier - struct specifier
 *@type: specifier type
 *@f: format
 */
typedef struct specifier
{
	char *type;
	void (*f)();
} specifier;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list c);
void print_str(va_list s);
void print_float(va_list f);
void print_int(va_list tin);
#endif
