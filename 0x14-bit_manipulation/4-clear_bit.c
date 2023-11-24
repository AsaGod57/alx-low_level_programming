#include "main.h"

/**
  * clear_bit - Starts to set a bit to zero
  * @n: Specifies pointer to number
  * @index: Specifies index to change
  * Return: 1 on success, -1 if failure (Ends)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
