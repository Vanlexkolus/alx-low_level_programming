#include "main.h"

/**
 * _isdigit - This code returns 1 if the input is a digit from 1 - 9
 * @c: Holds the input
 * Return: Returns 1 if true and returns zero if not
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
