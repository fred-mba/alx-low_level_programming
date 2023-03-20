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
*use putchar function only (8times)
*Not allowed to use variable type char
*Return: finish print 0 (success)
*/

int main(void)
{
	int w, x, y, z;

	for (w = '0'; w <= '9'; w++)
	{
		for (x = '0'; x <= '8'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '1'; z <= '9'; z++)
				{
					putchar(w);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);
					putchar(',');

					if (w == '9' && x == '8' && y == '9' && z == '9')
					{
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return ('0');
}
