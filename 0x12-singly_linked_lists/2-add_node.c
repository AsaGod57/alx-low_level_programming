#include "lists.h"

/**
 * add_node - Starts to add a new node at the beginning of a list
 *@head: Specifies a pointer to the head of the list
 *@str: Specifies the string to be added
 * Return: The address to the new element or NULL if otherwise
 * (Ends)
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}
