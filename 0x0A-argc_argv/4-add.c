#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: argument vector
 *If no number is passed to the program, print 0
 *If one of the number contains symbols that are not digits, print Error
 *Assume that addition of numbers can be stored in an int
 *Return: 1 if non-digits are present in the argument
 */

int main(int argc, char *argv[])
{
	int i, num, res = 0;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		if (argv[i])
		{
			/*convert the initial part of the string to given base*/
			num = strtol(argv[i], &arg, 10);
			if (!*arg)

				res += num;
			else
			{
				printf("Error\n");
				return (1);
			}

		}
	}
	printf("%d\n", res);
	return (0);
}
