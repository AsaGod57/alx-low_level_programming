#include "lists.h"

/**
 * add_dnodeint - Starts to add a new node at the beginning of a dlistint_t
 * @head: Specifies double pointer to the head of the list
 * @n: Specifies data to be added
 * Return: The address of the new element, or NULL if otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
