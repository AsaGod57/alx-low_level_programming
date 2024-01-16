#include "main.h"

/**
 * _strcat - Starts to concatenate two strings
 * @dest: Specifies string to append
 * @src: Specifies string to add
 * Return: The pointer to the resulting string (Ends)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
