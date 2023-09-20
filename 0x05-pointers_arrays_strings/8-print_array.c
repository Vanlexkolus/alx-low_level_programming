#include "main.h"

/**
 * print_array - prints the elements of an array of integers, followed by a new line
 * @*a: pointer 
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i < 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
