#include "main.h"

/**
  * set_bit - Starts to set bit at index to 1
  * @n: Specifies pointer to number
  * @index: Specifies index to change
  * Return: 1 on success, -1 if otherwise (Ends)
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
