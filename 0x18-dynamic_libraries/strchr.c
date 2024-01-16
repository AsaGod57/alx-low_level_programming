#include "main.h"
#include <stdio.h>

/**
 * _strchr - Starts function that locates a character in a string
 * @s: Specifies a string to search from
 * @c: Specifies a character to be searched
 *Return: The pointer to the first character or NULL if otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
			return (s - 1);
		if (i == 0)
		{
			return (NULL);
		}
	}
}
