#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers.
 *The numbers should be separated by comma, followed by a space
 *Not allowed to use the standard library
 *Not allowed to use long long, malloc, pointers,
 *	arrays/tables, or structures
 *Not allowed to hard code any Fibonacci number (except for 1 and 2)
 * Return: 0 (Success)
 */
int main(void)
{
	int cnt;
	unsigned long i, j, k;
	unsigned long m, n, p, fobni;

	cnt = 0;
	j = 1;
	i = 0;
	for (cnt = 1; cnt <= 91; cnt++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (cnt <= 98)
	{
		fobni = (m + n) / 1000;
		p = (m + n) - fobni * 1000;
		k = (i + j) + fobni;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (cnt != 98)
			printf(", ");
		cnt++;
	}
	putchar('\n');
	return (0);
}
