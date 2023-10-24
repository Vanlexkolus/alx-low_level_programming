#include "lists.h"

/**
 * add_nodeint - a function that adds new node to a list
 * @head: Holds the address of the first node
 * @n: Data collected (an int for this case)
 * Return: Return address of node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		printf("Memory allocation fail for the newNode\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (&*newNode);
}
