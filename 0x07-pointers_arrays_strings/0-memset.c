#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *Description: fills the first n bytes of the memory area pointed
 *	to by s with the constant byte b.
 *Returns a pointer to the memory area s
 *@s: destinination pointer
 *@b: string variable
 *@n: bytes of memory area needed to be filled
 *Return: `s` which is the copied string string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
