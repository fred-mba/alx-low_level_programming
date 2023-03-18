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
	for (m = 'a'; m <= 'z'; ++m)
	{
		putchar(m);
	}

	m = 'A';

	/*loop from assigned uppercase A to Z*/
	for (m = 'A'; m <= 'Z'; ++m)
	{
		putchar(m);
	}

	putchar('\n');

	return (0);
}
