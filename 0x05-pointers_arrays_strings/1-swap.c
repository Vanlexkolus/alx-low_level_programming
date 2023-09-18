#include "main.h"

/**
 * swap_int - this function swaps the value of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: Return Void
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;

	*a = c;
	*b = d;

	c = *b;
	d = *a;	
}
