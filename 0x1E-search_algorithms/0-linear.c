#include "search_algos.h"
#include <stdio.h>
/**
  * linear_search - Searches an array linerly and prints out the result
  * @array: Array to search
  * @size: Size of the array
  * @value: Value to search for
  * Return: Returns the first index of the value
  */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
