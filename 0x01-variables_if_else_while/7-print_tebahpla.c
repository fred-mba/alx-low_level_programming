#include <stdio.h>
#include <stdlib.h>

/**
*main -Entry point
*
*Description - 'prints the lowercase alphabet in reverse,
*followed by a new line'
*
*Return: finish with exit code 0 (success)
*/

int main(void)
{
	char n = 'z';

	for (n = 'z'; n >= 'a'; --n)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
