#include <stdio.h>
#include <stdlib.h>

/**
*main - Get pass to the block code
*
*Description - 'prints all possible combination of \
*		digits'
*
*numbers must be separated by comma
*print only smallest combination of numbers
*use putchar function only (5times)
*Not allowed to use variable type char
*Return: finish print 0 (success)
*/

int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if (x == '7' && y == '8' && z == '9')
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	return (0);
}
