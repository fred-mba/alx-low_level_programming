#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_opcodes - takes a pointer to a function and prints
 *	the opcodes of its instruction.
 *@funct: pointer to memory contents
 *
 */

void print_opcodes(void *funct)
{
	unsigned char *pf;
	int num_bytes = 0;

	pf = (unsigned char *)funct;

	/*stops when encounter `ret` instruction for any architecture used*/
	while (*pf != 0xC3 && *pf != 0xC2 && *pf != 0xC9 && *pf != 0xCA)
	{
		printf("%02x ", *pf);
		pf++;
	}
	printf("%02x\n", *pf);

	/*check if the number of bytes is negative*/
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
}

/**
 *main - calls print_opcodes function with a pointer to itself
 *@argc: argument count passed
 *@argv: argument vector
 *Return: 0 ==> success.
 */

int main(int argc, char *argv[])
{
	while (--argc)
	{
		if (argc < 1)
		{
			printf("Error\n");
			exit(1);
		}
		printf("%s\n", *argv++);
		print_opcodes((void *)main);
	}
	return (0);
}
