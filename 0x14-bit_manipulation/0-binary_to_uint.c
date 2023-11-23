#include "main.h"

/**
  * _stoi - Starts to convert chars to integers
  * @c: Specifies the char to convert
  * Return: The converted int (Ends)
  */
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
  * _strlen - Starts to calculates the length of the string
  * @s: Specifies input
  * Return: The length of string (Ends)
  */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
  * binary_to_uint - Starts to converts a string of 1's and 0's
  * @b: Specifies the string to convert
  * Return: The unsigned decimal number (Ends)
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, tmp, expo;

	if (!b)
		return (0);
	result = tmp = 0;
	expo = 1;
	for (i = _strlen(b) - 1; b[i]; i--, expo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		tmp = _stoi(b[i]);
		result += tmp * expo;
	}
	return (result);
}
