#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcmp - Start point
 * @s1: Specifies the first string
 * @s2: Specifies the second string
 * Return: Nothing (Ends)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;


	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
