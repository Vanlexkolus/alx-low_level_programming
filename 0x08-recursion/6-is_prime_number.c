#include "main.h"

/**
 * is_prime_number - checks if an input is prime or not
 * @n: input from user
 * Return: return an integer
 */

int is_prime_number(int n)
{
	int a;

	if (n <= 1)
	{
		return (0);
	}

	for (a = 2; a * a <= n; a++)
	{
		if (n % a == 0)
		{
			return (0);
		}
	}
	return (1);
}
