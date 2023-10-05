#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of character
 * @c: the specific character
 * Return: return a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
