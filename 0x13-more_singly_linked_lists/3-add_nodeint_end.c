#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - Starts to add new nodes to the end of list
  * @head: Specifies current place in the list
  * @n: Specifie the inegert to add to the list
  * Return: The pointer to current position in list (Ends)
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
