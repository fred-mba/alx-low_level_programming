#include "main.h"

/**
 *cap_string - capitalizes all words of a string
 *@str: string pointer
 *Return: void
 */

char *cap_string(char *str)
{
	int i, j;
	char mark[] = ",;.!?(){}\n\t\" ";

	i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');
	while (str[i] != '\0')
	{
		for (j = 0; mark[j] != '\0'; j++)
			if (str[i - 1] == mark[j] && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}
