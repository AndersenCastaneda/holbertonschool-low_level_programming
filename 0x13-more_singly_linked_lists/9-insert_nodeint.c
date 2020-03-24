#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head linked list (pointer address)
 * @idx:  index of the list where the new node should be added
 * @n: value for (*head)->n
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *newNode = malloc(sizeof(listint_t));

	if (!*head || !newNode)
		return (NULL);

	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = (*head)->next;
		*head = newNode;
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
