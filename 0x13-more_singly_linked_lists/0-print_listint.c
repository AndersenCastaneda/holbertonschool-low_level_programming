#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head pointer linked list
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (!h)
		return ('\0');

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
