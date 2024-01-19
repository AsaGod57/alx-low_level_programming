#include "main.h"

/**
  * _abs - Start point
  * @c: Specifies the number to be computed
  * Return: The absolute value of number or zero (Ends)
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
