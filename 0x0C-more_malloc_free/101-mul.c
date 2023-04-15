#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_isdigit - checks for a digit (0 through 9)
*
*@str: digit initialization
*
*Return: 1 is str[i] is a digit, 0 otherwise
*/

int _isdigit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 *mul - multiplies two arguments
 *@num1: 1st argument number
 *@num2: 2nd argument number
 *Return: multiplication result
 */

int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 *main - multiplies two positive integers in the allocated memory
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 ==> success
 */

int main(int argc, char *argv[])
{
	int *prod, res, i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		if (!_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	prod = malloc(sizeof(int));
	res = mul(atoi(argv[1]), atoi(argv[2]));
	printf("%d\n", res);

	free(prod);

	return (res);
}
