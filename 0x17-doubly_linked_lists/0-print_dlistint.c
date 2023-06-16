#include "lists.h"

/**
 * print_dlistint - Prints prints the elements of a dlistint_t list
 * @h: head of the list
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);

}
