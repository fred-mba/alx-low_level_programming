#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: number whose bit is to be set to zero
 *@index:is the position, starting from 0 of the bit you want to set
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/*If index out of range*/
		return (-1);
	}
	else
		*n &= ~(1 << index);
	return (1);
}
