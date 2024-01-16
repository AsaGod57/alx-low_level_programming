#include "main.h"

/**
 * *_memcpy - Starts function to copy n bytes from memory area
 * @src: Specifies source memory area
 * @dest: Specifies destination memory
 * @n: Specifies number of times to copy to dest
 * Return: The  pointer to dest (Ends)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
