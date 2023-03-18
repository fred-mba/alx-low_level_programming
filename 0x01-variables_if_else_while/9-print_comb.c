#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Description - prints combination of single units
*
*Numbers must be separated by , followed by a space
*Numbers in ascending order
*Allowed to use putchar function only
*Allowed to use char variable only
*
*Return: finish with code 0 (success)
*/

int main(void)
{
	char number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

