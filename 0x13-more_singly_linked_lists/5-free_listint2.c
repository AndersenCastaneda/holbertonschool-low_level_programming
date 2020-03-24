#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of the linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (!*head)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
}
