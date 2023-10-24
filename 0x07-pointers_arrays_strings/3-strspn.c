#include "main.h"
#include <stdio.h>

/**
  * _strspn - Start point
  * @s: Specifies the source string
  * @accept: Specifies the accepted string
  * Return: The number of bytes (Ends)
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
