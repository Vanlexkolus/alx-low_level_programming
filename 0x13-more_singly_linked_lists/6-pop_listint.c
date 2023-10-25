#include "lists.h"

/**
 * pop_listint - a function that deletes the head (first) node of a list
 * @head: headder pointer
 * Return: return an int
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}
	if (*head != NULL)
	{
		temporary = *head;
		i = temporary->n;

		*head = temporary->next;
		free(temporary);
	}
	return (i);
}
