#include "main.h"

/**
 * _strchr - Start point
 * @s: Specifies the string to search
 * @c: Specifies the char to search
 * Return: The pointer to first incidence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
