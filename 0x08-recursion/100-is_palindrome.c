#include "main.h"

int check_palindrome(char *s);

/**
  * is_palindrome - Start point
  * @s: Specifies the string value to be checked
  * Return: The integer value (Ends)
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - Start point
  * @s: Specifies the string value to be checked
  * Return: The integer value
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - Start point
  * @s: Specifies the string to get the length
  * Return: The string length (Ends)
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
