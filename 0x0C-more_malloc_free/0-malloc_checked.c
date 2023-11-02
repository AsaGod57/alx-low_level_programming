#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Start point
 * @b: Specifies the variable for memory allocation
 * Return:  0 Always (Ends)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
