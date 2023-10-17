#include "main.h"

/**
  * rev_string - Start point
  * @s: Specifies the string to be modified
  * Return: void (Ends)
  */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
