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
	int t, rand_num, gen_pasw;

	srand(time(NULL));

	for (t = 0; t <= 2250; t++)
	{
		rand_num = ((rand() % 125) + 1);

		printf("%c", rand_num);

		gen_pasw -= rand_num;
	}
	printf("\n");

	return (0);
}
