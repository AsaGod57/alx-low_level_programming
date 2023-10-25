#include "main.h"

/**
  * _pow_recursion - Start point
  * @x: Specifies the value to multiply
  * @y: Specifies the times to multiply the value
  * Return: The multiplied value (Ends)
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
