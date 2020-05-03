#include "lists.h"

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
