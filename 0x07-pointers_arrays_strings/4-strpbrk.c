#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - Start point
  * @s: Spoecifies the source string
  * @accept: Specifies the accepted characters
  * Return: The string found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
