#include "main.h"

/**
 * _strncat - Starts to concatenate n bytes from a string
 * @dest: Specifies destination string
 * @src: Specifies source string
 * @n: Specifies number of bytes of str to concatenate
 * Return: The pointer to the resulting string dest
 */

char *_strncat(char *dest, char  *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
