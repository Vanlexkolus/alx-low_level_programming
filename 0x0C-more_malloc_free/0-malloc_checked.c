#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 * should cause normal process termination with a status value of 98
 * @b: unsigned integer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
