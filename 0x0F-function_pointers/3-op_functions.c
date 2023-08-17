#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two numbera
 * @a: first
 * @b: second
 *
 * Return: sum of a and b
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns subtraction
 * @a: first
 * @b: second
 *
 * Return: remainder of the numbers of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns two numbers product
 * @a: first
 * @b: second
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two
 * @a: first
 * @b: second
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: first
 * @b: second
 *
 * Return: remainder od division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
