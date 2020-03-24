#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: head linked list
 * @index: position to get in the linked list
 * Return: node in index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);

	temp = head;
	for (i = 0; temp->next && i < index; i++)
		temp = temp->next;

	if (!temp->next)
		return (NULL);

	return (temp);
}
