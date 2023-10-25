#include "main.h"

/**
  * _strlen_recursion - Start point
  * @s: Specifies the string to count
  * Return: The integer value (Ends)
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
