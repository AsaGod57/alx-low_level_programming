#include "main.h"

/**
  * _memcpy - Start point
  * @dest: Specifies dest memory area
  * @src: Specifies source memory area
  * @n: Specifies bytes from memory area to copy
  * Return: The memory area replaced (Ends)
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
