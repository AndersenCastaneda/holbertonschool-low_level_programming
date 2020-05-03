#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: linked list
 * Return: Sum of all the data (n), if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	if (!head)
		return (0);

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
