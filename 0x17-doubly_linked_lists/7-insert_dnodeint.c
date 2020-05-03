#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Linked list head
 * @idx: Postition to add de node
 * @n: value for node->n
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newNode = malloc(sizeof(dlistint_t));

	if (!h || !newNode)
		return (NULL);

	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = temp;
		*h = newNode;
		return (newNode);
	}

	while (idx > 1)
	{
		if (!temp)
			return (0);
		temp = temp->next;
		idx--;
	}

	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
