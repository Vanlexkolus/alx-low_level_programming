#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function name
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
