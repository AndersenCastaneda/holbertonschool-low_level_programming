#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: head linked list
 * @index: position to get in the linked list
 * Return: node in index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	while (index > 0)
	{
		if (!temp)
			return (0);
		temp = temp->next;
		index--;
	}
	return (temp);
}
