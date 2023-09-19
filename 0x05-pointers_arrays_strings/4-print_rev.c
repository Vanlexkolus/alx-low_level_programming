#include "main.h"

/**
 * print_rev - This function prints a string in reverse
 * @s: Points to the srting
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar (*s);
		s--;
	}
	_putchar('\n');
}
