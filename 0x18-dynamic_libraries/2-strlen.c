#include "main.h"

/**
  * _strlen - Start point
  * @s: Specifies the String to count
  * Return: The string length (Ends)
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
