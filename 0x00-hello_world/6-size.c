#include <stdio.h>
/**
*main - Gate pass to the code block
*Return: Always at 0 (success)
*/
int main(void)
{
	/*Declaring variables*/
	char z;
	int y;
	long int x;
	long long int w;
	float v;

	/*Byte sizes are evaluated by the sizeof function*/
	printf("Size of a char: %i byte(s)\n", sizeof(z));
	printf("Size of an int: %i byte(s)\n", sizeof(y));
	printf("Size of a long int: %i byte(s)\n", sizeof(x));
	printf("Size of a long long int: %i byte(s)\n", sizeof(w));
	printf("Size of a float: %i bytes(s)\n", sizeof(v));

	return (0);
}
