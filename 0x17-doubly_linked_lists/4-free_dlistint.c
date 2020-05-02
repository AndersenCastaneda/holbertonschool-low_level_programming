#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list
 * @head: Linked list to free
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;

	while (head && head->prev)
		head = head->prev;

	while (head && head->next)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
	head = NULL;
}
