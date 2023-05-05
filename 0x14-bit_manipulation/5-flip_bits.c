#include "main.h"

/**
 *flip_bits - returns the number of bits needed to flip
 *	to get from one number to another
 *@n: 1st operand number
 *@m: 2nd operand number
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int XOR = n ^ m;

	while (XOR)
	{
		count++;
		XOR &= (XOR - 1);
	}
	return (count);
}
