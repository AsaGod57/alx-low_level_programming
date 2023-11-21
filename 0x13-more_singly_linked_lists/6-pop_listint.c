#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - Starts to pop the head of the list
  * @head: Specifies the head of the list
  * Return: The contents of head
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		i = 0;
	return (i);
}
