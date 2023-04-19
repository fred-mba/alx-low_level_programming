#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Not allowed to use any kind of loop
 *Allowed to use a maximum of 3 if statements
 *Return: 0 ==> success operation
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*operator)(int, int);

	if (argc != 4) /*number of arguments is wrong*/
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	operator = get_op_func(argv[2]);

	if (operator == NULL) /*operator is none of the above*/
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]); /*convert arguments to int*/
	b = atoi(argv[3]);

	printf("%d\n", operator(a, b));

	return (0);
}
