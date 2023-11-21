#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - Starts to define function
  * @head: Specifies description of argument
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
