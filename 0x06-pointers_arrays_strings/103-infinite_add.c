#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *infinite_add - adds two numbers that may be larger than the
 *	size of an int or a long int
 *@n1: 1st number array
 *@n2: 2nd number array
 *@r: the buffer that the function will use to store the result
 *@size_r: buffer size
 *Return: return pointer to buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int i, j, k = 0, carry = 0, sum, digit1, digit2;
	char temp;

	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		digit2 = (j >= 0) ? (n2[j] - '0') : 0;
		sum = digit1 + digit2 + carry;

		if (k < size_r - 1)
		{
			r[k] = (sum % 10) + '0';
			k++;
			carry = sum / 10;
		}
		else
		{
			return ("Error");
		}
		i--;
		j--;
	}

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	r[k] = '\0';

	return (r);
}
