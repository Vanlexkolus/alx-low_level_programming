#include "main.h"

/**
 * print_most_numbers - This function prints one to nine but removes 2 and 4
 *
 * Return: The return value is void
 */

void print_most_numbers(void)
{
	int a = 48;

	while (a < 58)
	{
		if (a == 50 || a == 52)
		{
			a++;
		}
		_putchar (a);
		a++;
	}
}
