#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - The fuction name
 * @array: array int
 * @size: size of t = unsigned int
 * @cmp: function pointer name
 * Return: Returns an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}
	return (-1);
}
