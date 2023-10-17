#include "main.h"

/**
  * _strlen - Start point
  * @s: Specifies the String to count
  * Return: (c) String length (Ends)
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
