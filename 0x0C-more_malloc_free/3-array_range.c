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
	int num;

	if (min > max)
		return (NULL);
	num = max - min + 1;

	point = malloc(num * sizeof(int));

	if (point == NULL)
		return (NULL);
	for (i = 0; i < num; i++)
		point[i] = min + i;
	return (point);
}
