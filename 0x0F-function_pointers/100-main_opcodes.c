#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the opcodes of its own main function
 *@argc: argument count
 *@argv: argument vector
 *ptr - is the pointer to the memory address
 *index - the index for each byte
 *Return: 0 ==> success.
 */
int main(int argc, char *argv[])
{
	int index, num_bytes;
	int (*ptr)(int, char **) = main;
	unsigned char print_opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);

	/*check if number of bytes is negative*/
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < num_bytes; index++)
	{
		print_opcode = *(unsigned char *)ptr;
		printf("%02x", print_opcode);

		if (index < num_bytes - 1)
			printf(" ");

		ptr++;
	}

	printf("\n");

	return (0);
}
