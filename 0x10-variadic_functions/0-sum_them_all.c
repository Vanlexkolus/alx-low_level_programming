#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sums up an entire input
 * @n: argument one
 * Return: returns the total number
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int total = 0;
	unsigned int i;

	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		total = total + va_arg(sum, unsigned int);
	}
	va_end(sum);
	return (total);
}
