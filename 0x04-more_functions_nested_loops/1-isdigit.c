#include "main.h"

/**
  * _isdigit - Start point
  * @x: The number to be checked
  *
  * Return: 1 for a character that is a digit or 0 for anything else (Ends)
  */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}
