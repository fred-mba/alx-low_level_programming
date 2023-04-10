#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - prints the minimum number of coins to make change for
 *	an amount of money.
 *@argc: argument count
 *@argv: argument vector
 *If the number passed as the argument is negative, print 0
 *Return: if the number of arguments passed to your program
 *	is not exactly 1, print Error
 */

int main(int argc, char *argv[])
{
	int i, amt_cents, change = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt_cents = atoi(argv[1]);

	while (i < 5)
	{
		while (amt_cents >= cents[i])
		{
			amt_cents -= cents[i];
			change++;
		}
		i++;
	}

	printf("%d\n", change);
	return (0);
}
