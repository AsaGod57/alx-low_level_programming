#include "lists.h"

/**
  * get_nodeint_at_index - Starts the nth node of the list
  * @head: Specifies head of the list
  * @index: Specifies which node to stop at
  * Return: The pointer to the nth node (Ends)
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
