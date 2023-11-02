#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Start point
 * @min: Specifies the address of memory to print
 * @max: Specifies the size of the memory to print
 * Return: Empty (Ends)
 */
int *array_range(int min, int max)
{
	int a;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
		return (NULL);
	for (a = 0; min <= max; min++, a++)
		p[a] = min;
	return (p);
}
