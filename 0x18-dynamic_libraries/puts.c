#include "main.h"

/**
 * _puts - Starts to print a string
 * @s: Specifies string pointer to print (Ends)
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
