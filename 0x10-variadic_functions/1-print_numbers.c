#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints the user input
 * @separator: characters comma
 * @n: integer, user input
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;

	va_start(pr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pr, unsigned int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(pr);
	printf("\n");
}
