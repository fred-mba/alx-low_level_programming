#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - addition operation function
 *@a: 1st parameter
 *@b: 2nd parameter
 *Return: summation of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtraction operation function
 *@a: 1st parameter
 *@b: 2nd parameter
 *Return: the difference of a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication operation function
 *@a: 1st parameter
 *@b: 2nd parameter
 *Return: returns the product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division operator function
 *@a: 1st parameter
 *@b:2nd parameter
 *Return: returns the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - modulus operator function
 *@a: 1st parameter
 *@b:2nd parameter
 *Return: returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
