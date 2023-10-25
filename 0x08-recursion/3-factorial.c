#include "main.h"

/**
  * factorial - Start point
  * @n: Specifies the number to calculate (factorial)
  * Return: The integer value (Ends)
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
