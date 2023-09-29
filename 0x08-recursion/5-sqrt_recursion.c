#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to c
 * @i: integer two
 * Return: integer
 */

int sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}
/**
 * sqrt_helper - the second function
 * @n: integer one
 * @i: integer two
 * Return: an integer
 */

int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, i + 1));
}
