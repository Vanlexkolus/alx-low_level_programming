#include "search.h"
#include <stdio.h>
/**
 * linear_search - This is a function that does a linear search
 * @array: this takes in an array
 * @size: The size of the array
 * @value: The value that the user would love to search for
 * a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * Return - this return the 0 upon successful execution else -1
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
    return (value);
    }
return (-1);
}
