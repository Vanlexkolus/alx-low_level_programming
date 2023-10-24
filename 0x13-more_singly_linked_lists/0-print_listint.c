#include "lists.h"

/**
 * print_listint - a function that prints the content of a node
 * @h: when this function is called, the 'head' pointer goes here
 * Return: the number of nodes in the link
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int num_of_nodes = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		num_of_nodes++;
		current = current->next;
	}
	return (num_of_nodes);
}
