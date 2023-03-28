#include "main.h"
#include <string.h>

/**
 *puts_half - prints half of a string
 *@str: string
 *
 *Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int half_len = len / 2;
	int i;

	/*Handle odd-length strings*/
	if (len % 2 == 1)
	{
		half_len += 1;
	}

	/*Print second half of string*/
	for (i = half_len; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
