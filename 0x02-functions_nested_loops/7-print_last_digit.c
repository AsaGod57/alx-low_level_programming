#include "main.h"

/**
  * print_last_digit - Start point
  * @n: Specifies the number to be treated
  *
  * Return: Value of the last digit of number (Ends)
  */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
