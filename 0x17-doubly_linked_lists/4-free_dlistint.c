#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: pointer to the list to free
 * Return: Always 0 (success)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
