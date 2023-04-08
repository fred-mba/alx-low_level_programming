#include <stdio.h>
#include "main.h"

/**
 *main - The program prints its name, followed by new line
 *@argc: argument count
 *@argv: one-demensional string argument array
 *Return: 0 ==> success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	/*exclude the running ./file*/
	printf("%d\n", argc - 1);
	return (0);
}
