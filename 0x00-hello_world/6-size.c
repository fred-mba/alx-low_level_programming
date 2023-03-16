#include <stdio.h>
/**
*main - Gate pass to the code block
*Return: Always at 0 (success)
*/
int main(void)
{
	/*The size of each variable is computed by sizeof function*/
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("Size of int: %i byte(s)\n", sizeof(int));
	printf("Size of int long: %i byte(s)\n", sizeof(int long));
	printf("Size of long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of float: %i bytes(s)\n", sizeof(float));

	return (0);
}
