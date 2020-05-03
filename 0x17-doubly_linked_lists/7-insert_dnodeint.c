#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Linked list head
 * @idx: Postition to add de node
 * @n: value for node->n
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (!h || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; head && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (!head->next)
				return (add_dnodeint_end(h, n));

			new->next = head->next;
			new->prev = head;
			head->next->prev = new;
			head->next = new;
			return (new);
		}
		else
			head = head->next;
	}

	return (NULL);
}
