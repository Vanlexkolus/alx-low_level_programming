#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: head pointer to address
 * Returns: returns void (nothing)
 */

void free_listint(listint_t *head)
{
	listint_t *temporaryNode;

	while (head != NULL)
	{
		temporaryNode = head;
		head = head->next;
		free(temporaryNode);
	}
}
