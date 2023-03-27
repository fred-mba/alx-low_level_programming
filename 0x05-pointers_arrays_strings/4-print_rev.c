#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: string type
 *
 *Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	--i;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
