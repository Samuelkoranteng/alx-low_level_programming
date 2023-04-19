#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addiction opreation
 * @a: int a
 * @b: int b
 * Return: sum of two values
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
# * @a: first value
 * @b: second value
 * Return: difference of two values
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first value
 * @b: second value
 * Return: product of the two values
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first int
 * @b: second int
 * Return: result of the division of the numbers
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
 * op_mod - get remainder of the division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: remainder of division of the numbers
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
