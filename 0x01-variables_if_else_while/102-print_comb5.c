#include <stdio.h>
/**
 * main - Prints all possible combinations of a pair of
 * two digit numbers, without any repetition.
(*
 * Return: 0 on success.
 */

int main(void)
{
	int w;
	int x;

	for (w = 0; w <= 99; w++)
	{
		for (x = 0; x <= 99; x++)
		{
			if (w < x && w != x)
			{
				putchar((w / 10) + '0');
				putchar((w % 10) + '0');
				putchar(' ');
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				if (w != 98 || x != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
