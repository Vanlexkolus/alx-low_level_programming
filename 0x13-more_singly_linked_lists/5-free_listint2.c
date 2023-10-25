#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: head pointer to address
 * Returns: returns void (nothing)
 */

void free_listint2(listint_t **head)
{
	listint_t *temporaryNode;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temporaryNode = *head;
			*head = temporaryNode->next;
			free(temporaryNode);
		}
	}
}
