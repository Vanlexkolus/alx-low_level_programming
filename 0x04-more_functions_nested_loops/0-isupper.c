#include "main.h"

/**
 * _isupper - this function returns 1 if c is an uppercse else zero
 * @c: this is the integer that collects the data
 * Return: return 1 if true and 0 if not
 */

int _isupper(int c)
{
	c = 'A';
	if (c <= 'Z')
	{
		return (1);
	}
	if (c <= 'a')
	{
		return ('0');
	}
	return (0);
}
