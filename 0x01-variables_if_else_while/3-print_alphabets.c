#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Description - 'print to lowercase and then upper'
*
*Return: return 0 upon success
*/

int main(void)
{
	char m = 'a';

	/*loop from assigned lowercase 'a' to 'z'*/
	while (m <= 'z')
	{
		putchar(m);
		m++;
	}

	m = 'A';

	/*loop from assigned uppercase A to Z*/
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}

	putchar('\n');

	return (0);
}
