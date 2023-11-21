#include "lists.h"

/**
 * print_listint - Starts to print all the elements of a linked list
 * @h: Specifies head of the list
 * Return: The number of nodes (Ends)
 */
size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
printf("%d\n", cursor->n);
count += 1;
cursor = cursor->next;
}
return (count);
}
