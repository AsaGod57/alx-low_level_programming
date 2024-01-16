#include "main.h"

/**
* _isalpha - Starts check for alphabetic character
* @c: Specifies a character to be checked
* Return: 1 if c is a letter or 0 if otherwise (Ends)
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
