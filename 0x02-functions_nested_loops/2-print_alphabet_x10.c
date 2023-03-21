#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alphabet \
*			followed by a new line.
*/

void print_alphabet_x10(void)
{
	char letter;
	int n = 0;

	while (n < 10)
	{
		for (letter = 'a'; letter <= 'z'; ++letter)
		{
			_putchar(letter);
		}

		_putchar('\n');

		++n;
	}
}
