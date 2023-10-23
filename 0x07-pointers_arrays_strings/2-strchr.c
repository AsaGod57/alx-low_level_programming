#include "main.h"
#include <stdio.h>

/**
  * _strchr - Start point
  * @s: Specifies the source string
  * @c: Specifies the character to find
  * Return: String of character found
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
