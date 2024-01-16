#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Starts to search a string
 * @s: Specifies string to search
 * @accept: Specifies string containing the bytes to check
 * Return: The pointer to the byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
