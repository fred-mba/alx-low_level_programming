#include "main.h"

/**
 *_strlen_recursion - obtains the string length
 *Description: we nee the string length to determine the
 *	similarities
 *@s: string pointer
 *Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *strtest - string test
 *@start: string pointer
 *@len: how long the string is
 *@cnt: count the number of characters found
 *Return: 1 if a string is a palindrome and 0 if not
 */

int strtest(char *start, int len, int cnt)
{
	if (cnt >= len)
		return (1);
	else if (start[len] == start[cnt])
		return (strtest(start, len - 1, cnt + 1));
	return (0);
}

/**
 *is_palindrome - checks the either case, either true or false
 *@s: string to check
 *Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int cnt = 0;

	return (strtest(s, len - 1, cnt));
}
