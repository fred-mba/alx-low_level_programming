#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - Get pass to block code
*
*Description - 'evaluates random numbers generated from time header.'
*
*Return: return 0 (code success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is a positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
