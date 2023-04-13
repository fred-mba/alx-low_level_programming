#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *@n: maximum number of characters to be copied from s1 to s2
 *If n is greater or equal to the length of s2 then use
 *	the entire string s2
 *If the function fails, it should return NULL
 *Return: return pointer to a NULL terminated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concstr;
	unsigned int len_s1, len_s2, S2cnt;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	S2cnt = n >= len_s2 ? len_s2 : n;

	concstr = malloc(sizeof(char) * (len_s1 + S2cnt + 1));

	if (concstr == NULL)
		return (NULL);

	memcpy(concstr, s1, len_s1);
	memcpy(concstr + len_s1, s2, S2cnt);

	concstr[len_s1 + S2cnt] = '\0';

	return (concstr);
}
