#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Description - 'alphabet to lower case'
*
*Return: return 0 (success)
*/

int main(void)
{
	char m = 'a';

	while(m <= 'z')
	{
		putchar(m);
		m++;
	}

	putchar('\n');
	return (0);
}
