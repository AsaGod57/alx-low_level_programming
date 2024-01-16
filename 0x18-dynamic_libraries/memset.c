#include "main.h"

/**
 * *_memset - Starts function to  fill with a constant byte
 * @s: Specifies memory to be altered
 * @b: Specify source of the byte that will be used to copy
 * @n: Specifies number of times to copy
 * Return: The pointer to the memory area (Ends)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
