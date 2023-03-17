#include <stdio.h>

/**
*main - Gate pass to the code block
*Return: Always at 0 (success)
*/

int main(void)
{ 
	/*sizeof evaluates the byte values of the variables*/
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));

	return (0);
}
