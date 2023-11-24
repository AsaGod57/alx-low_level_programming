#include "main.h"

/**
  * get_bit - Starts to obtain value of integer
  * @n: Specifies input long integer
  * @index: Specifies index to start
  * Return: The value of the bit (Ends)
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
