#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list
 * @head: Linked list to free
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head && head->prev)
		head = head->prev;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}

	free(head);
	head = NULL;
}
