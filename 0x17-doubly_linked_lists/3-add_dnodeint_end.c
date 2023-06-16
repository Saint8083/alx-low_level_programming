#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of dlistint_t list.
 * @head: head of the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
	}

	new->prev = h;

	if (h != NULL)
		h->next = new;

	*head = new;

	return (new);
}
