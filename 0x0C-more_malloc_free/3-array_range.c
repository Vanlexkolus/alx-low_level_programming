#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers.
 * @min: minmum int
 * @max: maximum int
 * Return: an integer
 */

int *array_range(int min, int max)
{
	int i;
	int *point;

	if (min > max)
		return (NULL);
	point = malloc(sizeof(int) * (max - min + 1));

	if (point == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		point[i] = min + 1;
	}
	return (point);
}
