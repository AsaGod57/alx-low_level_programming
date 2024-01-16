#include "main.h"

/**
 * _strlen - Starts to return the length of a string
 * @s: Specifies string to check
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
