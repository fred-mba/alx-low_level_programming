#include <stdio.h>
#include <stdlib.h>

/**
*main - Get pass to code block
*
*Description - 'print all letters except q and e'
*
*Return: finish with exit code 0
*/

int main(void)
{
	char n = 'a';

	for (n = 'a'; n <= 'z'; ++n)
	{
		if (n != 'q' && n != 'e')
			putchar(n);
	}
	putchar('\n');

	return (0);
}
