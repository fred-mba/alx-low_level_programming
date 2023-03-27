#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - reverses a string
 *@s: string pointer
 *
 *Return: void
 */

void rev_string(char *s)
{
	char *a, *z, c;

	a = s;
	z = s + strlen(s) - 1;

	while (a < z)
	{
	c = *a;
	*a = *z;
	*z = c;

	a++;
	z--;
	}
}
