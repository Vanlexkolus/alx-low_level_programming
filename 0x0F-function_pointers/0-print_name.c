#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - name of function
 * @name: the name
 * @f: pointer of the funtion
 * Return: VOid
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
