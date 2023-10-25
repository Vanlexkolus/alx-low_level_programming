#include "lists.h"

/**
 * add_nodeint_end - a function that add's a new node to the end of a list
 * @head: a pointer pointer that points to head
 * @n: an int constant
 * Return: returns the address of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temporaryNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		printf("memory allocation failed for newNode\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temporaryNode = *head;
	}
	while (temporaryNode->next != NULL)
	{
		temporaryNode = temporaryNode->next;
	}
	temporaryNode->next = newNode;

	return (*head);
}
