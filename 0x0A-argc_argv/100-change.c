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
	unsigned int i;
	int amount, change = 0;

	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount <= 0)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < sizeof(cents) / sizeof(i); i++)
	{
		change += amount / cents[i];
		amount %= cents[i];
	}

	printf("%d\n", change);
	return (1);
}
