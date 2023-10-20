#include "main.h"

/**
  * string_toupper - Start point
  * @p: Specifes the string to be modified
  * Return: The char variable (Ends)
  */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
