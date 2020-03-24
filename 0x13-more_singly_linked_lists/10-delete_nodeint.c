#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list
 * @head: pointer head linked list
 * @index: node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *del = NULL;

	if (!head)
		return (-1);

	if (index == 0 && *head)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (index > 1)
	{
		if (!temp || !temp->next)
			return (-1);
		temp = temp->next;
		index--;
	}

	if (temp)
	{
		del = temp->next;
		temp->next = del->next;
		free(del);
		return (1);
	}

	return (-1);
}
