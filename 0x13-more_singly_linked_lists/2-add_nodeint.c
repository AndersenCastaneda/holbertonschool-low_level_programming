#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head node linked list
 * @n: value to add int hte node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return ('\0');

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
