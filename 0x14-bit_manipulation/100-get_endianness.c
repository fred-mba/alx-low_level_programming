#include "main.h"

/**
 *get_endianness - get order in which bytes are stored in memory
 *Description: Endian bytes are stored in two values
 *Little endian and big-endian
 *ptr - memory pointer
 *Return: 0 for little endian system and 1 for big-endian system
 */
int get_endianness(void)
{
	unsigned int val = 1;
	char *ptr = (char *)&val;

	if (*ptr == 1) /*little endian*/
		return (1);
	else
		return (0); /*big-endian*/
}
