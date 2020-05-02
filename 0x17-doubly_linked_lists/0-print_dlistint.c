#include "lists.h"

/**
 * print_dlistint - Prints all elements of a linked list
 * @h: head of the linked list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}

	return (count);
}