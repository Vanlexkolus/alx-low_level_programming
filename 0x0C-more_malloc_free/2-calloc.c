#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function allocates memory for an array of nmemb
 * elements of size bytes each and returns
 * a pointer to the allocated memory.
 * @nmemb: size one
 * @size: size two
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *u;
	
	if (nmemb == 0 || size == 0)
	return (NULL);

	u = malloc(size * nmemb);
	if (u == NULL)
		return (NULL);

	memset (u, 0, size * nmemb);
	return (u);
}
