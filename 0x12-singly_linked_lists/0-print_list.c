#include "lists.h"

/**
 * print_list - print all the elements of a linked list
 * @h: pointer to the struct list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
