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
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; ++i)
	{
		num = atoi(argv[i]);

		if (num == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{	
			res += num;
		}
	}
	printf("%d\n", res);

	return (0);
}
