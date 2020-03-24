#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: head of the linked list
 * return (*head)->n, if head is null return 0
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (!*head || !head)
		return (n);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
