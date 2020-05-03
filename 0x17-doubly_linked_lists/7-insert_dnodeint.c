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

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (head && head->prev)
		head = head->prev;

	for (i = 0; head && i <= idx; i++)
	{
		if (i == idx)
		{
			if (!head->next)
				return (add_dnodeint_end(h, n));

			new->next = head;
			new->prev = head->prev;
			head->prev->next = new;
			head->prev = new;
			return (new);
		}
		else
			head = head->next;
	}

	return (NULL);
}
