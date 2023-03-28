#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - generates random valid passwords for the program 101-crackme
*
*Return: 0
*/

int main(void)
{
	int t, rand_num, gen_var;

	srand(time(NULL));

	for (t = 0; t <= 2250; t++)
	{
		rand_num = rand();
		gen_var = ((rand_num % 125) + 1);

		printf("%d", gen_var);
	}
	printf("\n");

	return (0);
}
