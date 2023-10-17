#include "main.h"

/**
  * _puts - Start point
  * @str: Specifies the string to print
  * Return: void (Ends)
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
