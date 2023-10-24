#include "lists.h"

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
