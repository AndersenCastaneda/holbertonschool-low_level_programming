#include "lists.h"

/**
 * dlistint_len - Get the number of elements in a linked list
 * @h: head of the linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = malloc(sizeof(dlistint_t));
	size_t count = 0;

	if (!head)
		exit(EXIT_FAILURE);

	head = h;
	while (head && head->prev)
		head = head->prev;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
