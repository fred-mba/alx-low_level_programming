#include <stdio.h>

/**
*main - Distinguishing prime numbers from composite numbers
*Description: prints the largest prime factor of the number 612852475143,
*		followed by a new line.
*
*Return: 0 (success)
*/

int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
			/*'num /= i' is short hand form for 'num = num / i'*/
	}
	printf("%li\n", num);
	return (0);
}
