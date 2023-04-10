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
	int amt_cents, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt_cents = atoi(argv[1]);

	while (amt_cents >= 0)
	{
		change++;
		if ((change - 25) >= 0)
		{
			change -= 25;
			continue;
		}
		if ((change - 10) >= 0)
		{
			change -= 10;
			continue;
		}
		if ((change - 5) >= 0)
		{
			change -= 5;
			continue;
		}
		if ((change - 2) >= 0)
		{
			change -= 2;
			continue;
		}
		amt_cents--;
	}
	printf("%d\n", change);
	return (0);
}
