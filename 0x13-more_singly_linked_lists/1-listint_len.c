#include "lists.h"

/**
 * listint_len - a function that return's the total num of elements in  node
 * @h: the 'head' pointer
 * Return: Returns the number of elements in a node
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int ele_num = 0;

	while (current != NULL)
	{
		ele_num++;
		current = current->next;
	}
	return (ele_num);
}
