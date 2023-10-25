#include "lists.h"

/**
 * sum_listint - a function that give the sum of all the data in the list
 * @head: pointer
 * Return: The sum of all int
 */

int sum_listint(listint_t *head)
{
	int i;

	i = 0;

	if (head == NULL)
	{
		return (i);
	}
	while (head != NULL)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
