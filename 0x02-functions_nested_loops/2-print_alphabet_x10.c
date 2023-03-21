#include "main"

/**
*print_alphabet_x10 - prints 10 times the alphabet \
*			followed by a new line.
*/

void print_alphabet_x10(void);
{
	char letter;
	int n = 0;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (n < 10)
		{
			_putchar(letter);
		}

		_putchar('\n');

		++n;
	}
}
