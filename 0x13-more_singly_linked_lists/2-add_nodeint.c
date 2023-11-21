#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - Starts to add  new nodes to the list
  * @head: Specifies the current place in the list
  * @n: Specifies the integer to add to the list
  * Return: The pointer to current position in list (Ends)
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
