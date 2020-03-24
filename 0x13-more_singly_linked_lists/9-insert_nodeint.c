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
	listint_t *newNode = malloc(sizeof(head));
	listint_t *temp = malloc(sizeof(head));

	if (!*head)
		return (NULL);

	temp = *head;
	while (idx > 0)
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
