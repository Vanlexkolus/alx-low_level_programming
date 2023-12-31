#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints a string
 * @separator: contains the characters
 * @n: number of extra arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *man;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		man = va_arg(str, char*);
		if (man == NULL)
		{
			man = "(nil)";
		}
		printf("%s", man);

		if  (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
