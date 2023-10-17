#include "main.h"

/**
  * print_rev - Start point
  * @s: Specifies the string to print
  * Return: void (Ends)
  */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
