#include "lists.h"

/**
 * get_dnodeint_at_index - Starts to return the nth node of a dlistint_t
 * @head: Specifies double pointer to the head of the list
 * @index: Specifies index of the node to return
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
