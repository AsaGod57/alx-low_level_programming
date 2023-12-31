#include "main.h"

/**
  * _puts_recursion - Start point
  * @s: Specifies the string to print
  * Return: Void (Ends)
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
