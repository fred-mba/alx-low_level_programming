#include "main.h"

/**
 *puts2 - prints any other character of a string
 *Description: the function prints every character
 *		and skips the next
 *@str: string
 *
 *Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)

			_putchar(str[i]);
		++i;

	}
	_putchar('\n');
}
