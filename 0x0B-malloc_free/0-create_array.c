#include "main.h"
#include <stdlib.h>

/**
 * create_array - Start point
 * @size: Specifies the number of elements
 * @c: Specifies the size of one unit
 * Return: The chars
 */
char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size == 0)
		return (NULL);
	res = malloc(size * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		res[i] = c;
	}
	return (res);
}
