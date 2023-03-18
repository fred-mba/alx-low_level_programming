#include <stdio.h>
#include <stdlib.h>

/**
*main - Get pass to the main code
*
*Description - 'prints all single digit numbers of base 10'
*'Allowed to use putchar only.'
*
*Return: print code 0 on console (success)
*/

int main(void)
{
	int base_10;

	/*Base 10 digits counts from 0-9*/
	for (base_10 = 0; base_10 < 10; base_10++)
	{
		putchar(base_10 + '0');
	}
	putchar('\n');

	return (0);
}
