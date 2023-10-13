#include "main.h"

/**
 * print_numbers - Prrints the numbers from 0 up to 9
 * Return: Always 0 (Ends)
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
