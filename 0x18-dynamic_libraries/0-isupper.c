#include "main.h"

/**
  * _isupper - Start point
  * @x: Specifies the number to be checked
  * Return: 1 for upper letter or 0 for anything else (Ends)
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
