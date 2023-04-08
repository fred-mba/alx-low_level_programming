#include <stdio.h>
#include "main.h"

/**
 *main - prints all arguments it receives.
 *@argc: argument count
 *@argv: one-dimensional string array
 *Return: 0 ==> success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
