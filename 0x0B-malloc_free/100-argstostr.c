#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *argstostr - concatenates all the arguments of your program
 *@ac: argument count
 *@av: argument vector
 *Each argument should be followed by a new line
 *Return: NULL if ac is 0 or av is NULLL
 */

char *argstostr(int ac, char **av)
{
	int i;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	str = malloc(len * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	str[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}
	str[len - 1] = '\n';

	return (str);
}
