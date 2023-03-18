#include <stdio.h>
#include <stdlib.h>

/**
*main - Get pass to the main code
*
*Description - 'prints all single digit numbers of base 16'
*Allowed to use putchar only
*
*Return: finish with exit code 0 on console (success)
*/

int main(void)
{
	int base_16;
	char n = 'a';

	/*Base 16 digits counts from 10-15*/
	for (base_16 = 0; base_16 < 10; base_16++)
	{
		putchar(base_16 + '0');
	}

	/*concatenates a-f to the output above*/
	for (n = 'a'; n <= 'f'; ++n)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
