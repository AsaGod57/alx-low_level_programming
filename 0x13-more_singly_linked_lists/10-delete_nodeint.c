#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * delete_nodeint_at_index - Starts to delete a node at index
  * @head: Specifies head of the list
  * @index: Specifies the location of the node to delete
  * Return: The pointer to head of list (Ends)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}