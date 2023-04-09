#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - multiplies two numbers.
 *@argc: argument count
 *@argv: 1-D array string
 *Return: 0 ==> success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
