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

	srand(time(NULL));

	for (t = 0, max_range = 2272; max_range > 122; t++)
	{
		rand_num = ((rand() % 125) + 1);

		printf("%c", rand_num);

		max_range -= rand_num;
	}
	printf("\n");

	return (0);
}
