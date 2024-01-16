#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Starts to locate a substring
 * @haystack: Specifies string to search in
 * @needle: Specifies substring to check
 * Return: The pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
