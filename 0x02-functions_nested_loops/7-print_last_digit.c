#include "main.h"

int print_last_digit(int n)
{
	int v;
	if (n < 0)
	{
		n = -n;
		a = n % 10;
	}
	if (v < 0)
	{
		v = -v;
		_putchar (v + '0');
	}
	return (v);
}
