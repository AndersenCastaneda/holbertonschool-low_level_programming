#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Linked list
 * @index: Position in the linked list
 * Return: If found return Linked list node, otherwise return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head ? head : NULL);
}
