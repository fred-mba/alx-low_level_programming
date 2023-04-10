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
	int i = 0, amount, change = 0;
	int cents[] = {25, 10, 5, 2, 1};
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = strtol(argv[1], &str, 10);

	if (!*str)
	{
		while (i < 5)
		{
			while (amount >= cents[i])
			{
				change += amount / cents[i];
				amount %= cents[i];
			}
			i++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", change);
	return (0);
}
