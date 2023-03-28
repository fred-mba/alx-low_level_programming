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
	int t, rand_num, max_range;

	max_range = 2250;

	srand(time(NULL));

	for (t = 0; t <= max_range; t++)
	{
		rand_num = ((rand() % 125) + 1);

		printf("%c", rand_num);

		max_range -= rand_num;
	}
	printf("\n");

	return (0);
}
