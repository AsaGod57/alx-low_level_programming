#include "lists.h"

/**
  * listint_len - Starts the number of nodes in a list
  * @h: Specifies singly linked list to print
  * Return: The number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
