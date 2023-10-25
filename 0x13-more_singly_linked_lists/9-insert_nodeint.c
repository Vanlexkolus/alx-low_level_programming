#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given index.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The value for the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *current = *head;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (!current)
		{
			free(newNode);
			return (NULL);
		}
		current = current->next;
	}
	newNode->next = current->next;
	current->next = newNode;
	return (newNode);
}
