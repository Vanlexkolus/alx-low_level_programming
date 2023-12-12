#include "main.h"
/**
 * _isalpha - this function checks for alphabetic character
 * @c: c is an intiger referenced in the fuction
 * Return: always return zero
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
