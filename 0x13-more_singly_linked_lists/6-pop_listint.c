#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: head of the linked list
 * return (*head)->n, if head is null return 0
 */
int pop_listint(listint_t **head)
{
	int n;

	if (!head)
		return (0);

	n = (*head)->n;
	free(*head);
	*head = (*head)->next;

	return (n);
}
