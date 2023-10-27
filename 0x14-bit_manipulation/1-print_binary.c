#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: The number to be printed in binary.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int sh, flg = 0;
	unsigned long int mask;

	sh = sizeof(n) * 8 - 1;

	while (sh >= 0)
	{
		mask = n >> sh;
		if (mask & 1)
		{
			_putchar('1');
			flg = 1;
		}
		else if (flg)
		{
			_putchar('0');
		}
		sh--;
	}
	if (!flg)
	{
		_putchar('0');
	}
}
