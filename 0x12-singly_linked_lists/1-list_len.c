#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a list_t list
 * @h: a pointer to the head of the list
 * Return: the number of elements (nodes) in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
