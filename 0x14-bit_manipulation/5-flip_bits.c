#include "main.h"

/**
  * flip_bits - Starts to compute number of bits required
  * @n: Specifies base number
  * @m: Specifies the number to transform
  * Return: The number of bit transformations (Ends)
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res;

	res = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}
