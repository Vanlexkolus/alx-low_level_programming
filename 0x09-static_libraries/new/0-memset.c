#include "main.h"

/**
 * _memset - prints the bla bla bla
 * @s: pointer
 * @b: array content
 * @n: number of times
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
