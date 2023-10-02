#include "main.h"

/**
 * is_prime_number - checks if an input is prime or not
 * @n: input from user
 * Return: return an integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (n * is_prime_recursive(n, n - 1));
}
