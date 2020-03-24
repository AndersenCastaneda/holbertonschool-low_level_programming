#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head linked list (listint_t)
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
