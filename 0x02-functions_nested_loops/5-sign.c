#include "main.h"

/**
 * print_sign - This function prints either +, -, or 0
 * @n: n returns either 1, -1, or 0
 * Return: returns the following
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	return (0);
}
