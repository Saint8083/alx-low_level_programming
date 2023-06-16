#include "lists.h"

/**
 * sum_dlistint - Sums all the data in dlistint_t list
 * @head: Head of the list
 * Return: Always 0 (success)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
