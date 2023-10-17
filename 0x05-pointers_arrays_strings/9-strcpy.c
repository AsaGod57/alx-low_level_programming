#include "main.h"

/**
  * _strcpy - Start point
  * @dest: Specifies the destination value
  * @src: Specifies the source value
  * Return: The pointer to dest (Ends)
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
