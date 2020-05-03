#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a
 * dlistint_t linked list
 * @head: dlistint_t linked list head
 * @index: Index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;

	if (index == 0 && h)
	{
		if (h->next)
		{
			h->next->prev = NULL;
			*head = h->next;
		}
		else
			*head = NULL;

		free(h);
		return (1);
	}

	while (h)
	{
		if (index == 0)
		{
			h->prev->next = h->next;
			if (h->next)
				h->next->prev = h->prev;
			free(h);
			return (1);
		}

		h = h->next;
		index--;
	}

	return (-1);
}
