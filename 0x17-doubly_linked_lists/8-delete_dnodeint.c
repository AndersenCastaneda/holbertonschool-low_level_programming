#include "lists.h"

/**
 * last_index - get the last index of a dlistint_t linked list
 * @head: dlistint_t linked list head;
 * Return: Last index value
 */
unsigned int last_index(dlistint_t *head)
{
	unsigned int len = 0;

	for (len = 0; head; len++)
		head = head->next;

	return (len - 1);
}

/**
 * rmv_dnodeint - Remove a node at the beginning of a dlistint_t list
 * @head: Head if the linked list
 * Return: The address of the new head
 */
dlistint_t *rmv_dnodeint(dlistint_t *head)
{
	if (!head)
		return (NULL);

	if (head->next)
	{
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
	else
	{
		free(head);
		head = NULL;
	}

	return (head);
}

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a
 * dlistint_t linked list
 * @head: dlistint_t linked list
 * @index: Index to delete
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int i;

	if (!head || index > last_index(h))
		return (-1);

	if (index == 0)
	{
		*head = rmv_dnodeint(*head);
		return (1);
	}

	for (i = 0; i < index; i++)
		h = h->next;

	h->prev->next = h->next;
	if (h->next)
		h->next->prev = h->prev;

	free(h);
	return (1);
}
