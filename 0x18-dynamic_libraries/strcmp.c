#include "main.h"

/**
 * _strcmp - Starts to compare two strings
 * @s1: Specifies first string to compare
 * @s2: Specifies second string to compare
 * Return: 0 if s1 is less than s2 
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
