#include "main.h"
/**
 * _islower  - this code scans for small
 * @c: c is an integer decleared in the function
 * Return: always return zero
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
