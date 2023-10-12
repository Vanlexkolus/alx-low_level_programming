#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - gives the sum of two numbers
 * @a: num one
 * @b: num two
 * Return: the sum
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtracts two num
 * @a: num 1
 * @b: num 2
 * Return: the value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two value
 * @a: val one
 * @b: val two
 * Return: the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two num
 * @a: num one
 * @b: num two
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder
 * @a: num one
 * @b: num two
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
