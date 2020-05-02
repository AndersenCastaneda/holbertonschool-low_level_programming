#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Head if the linked list
 * @n: value n for the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head, *new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = NULL;

	if (!head || !new)
		return (NULL);

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (h->next)
		h = h->next;

	h->next = new;
	new->prev = h;

	return (new);
}
