#include "main.h"

/**
  * _strncat - Start point
  * @dest: Specifies the destination value
  * @src: Specifies the source value
  * @n: Specifies the limit of the concatenation
  * Return: Pointer to string dest (Ends)
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
