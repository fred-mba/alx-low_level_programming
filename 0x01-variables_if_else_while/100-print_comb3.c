#include <stdio.h>
#include <stdlib.h>

/**
*main - Get pass to the block code
*
*Description - 'prints all possible combination of
*two digits'
*
*numbers must be separated by comma
*print only smallest combination of numbers
*use putchar function only (5times)
*Not allowed to use variable type char
*Return: finish print 0 (success)
*/

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x < y && x != y)
			{
				putchar(x);
				putchar(y);

				if (x == '8' && y == '9')
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

	return (0);
}
