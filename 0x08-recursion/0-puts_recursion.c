#include "main.h"

/**
 *_puts_recursion - prints a string, followed by a new line.
 *@s: string pointer
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /*Base case*/
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s); /*calling a function within a fuction*/
	}
}
