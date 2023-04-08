#include <stdio.h>
#include "main.h"

/**
 *main - The program prints its name, followed by new line
 *@argc: argument count
 *@argv: argument array
 *Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
