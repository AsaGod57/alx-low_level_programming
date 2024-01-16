#include "main.h"

/**
 * *_strcpy - Starts to copy the string pointed to by src
 * @src: Specifies string to be copied
 * @dest: Specifies destination buffer pointer
 * Return: The pointer to dest (Ends)
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
