#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Head if the linked list
 * @n: value n for the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (NULL);

	if (*head)
		(*head)->prev = new;

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
