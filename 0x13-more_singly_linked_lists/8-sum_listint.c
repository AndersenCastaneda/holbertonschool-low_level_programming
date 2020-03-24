#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: head of the linked list
 * Return: returns the sum of all the
 * data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;
	listint_t *temp;

	if (!head)
		return (0);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
