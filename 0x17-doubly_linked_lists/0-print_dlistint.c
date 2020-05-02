#include "lists.h"

/**
 * print_dlistint - Prints all elements of a linked list
 * @h: head of the linked list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h && h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
