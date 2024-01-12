#include "lists.h"

/**
 * free_dlistint - Starts to free a dlistint_t list
 * @head: Specifies pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
