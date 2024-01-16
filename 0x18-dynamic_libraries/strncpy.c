#include "main.h"

/**
 * _strncpy - Starts function that copies a string
 * @dest: Specifies destination string
 * @src: Specifies source string
 * @n: Specifies number of string bytes to copy
 * Return: The pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
