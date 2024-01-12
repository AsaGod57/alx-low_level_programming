#include "lists.h"

/**
 *  sum_dlistint - Starts to return the sum of all the data (n) of a dlistint_t
 * @head: Specifies double pointer to the head of the list
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
