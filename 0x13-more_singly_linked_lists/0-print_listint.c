#include "lists.h"
#include <stdio.h>

/**
  * print_listint - Starts to print all elements of a list_t linked
  * @h: Specifies singly linked list to print
  * Return: The number of nodes in the list (Ends)
  */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
