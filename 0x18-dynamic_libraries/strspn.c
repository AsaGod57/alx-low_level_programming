#include "main.h"

/**
 * _strspn - Starts to get the lenght of a prefix substring
 * @s: Specifies string to evaluate
 * @accept: Specifies string containing the list of characters to match
 * Return: The number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, mark;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		mark = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				mark = 1;
			}
		}
		if (mark == 0)
			return (k);
	}
	return (0);
}
