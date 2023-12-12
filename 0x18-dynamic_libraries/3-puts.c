#include "main.h"

/**
 * _puts - this function prints a string
 * @s: the string
 * Return: void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
