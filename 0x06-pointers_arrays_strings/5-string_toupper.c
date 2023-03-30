#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *Description: iterates through half of the array, swapping each
 *      element with corresponding element at the opposite.
 *@s: string pointer
 *Return: void
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		++ptr;
	}
	return (s);
}
