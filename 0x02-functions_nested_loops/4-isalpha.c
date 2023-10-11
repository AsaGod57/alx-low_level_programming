#include "main.h"

/**
  * _isalpha - Start point
  * @c: Specifies the character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else (Ends)
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
