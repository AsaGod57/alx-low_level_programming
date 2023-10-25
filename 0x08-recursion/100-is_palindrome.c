#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 *_strlen_recursion - Start point
 * @s: Specifies the string to calculate length
 * Return: The length of string (Ends)
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - Start point
 * @s: Specifies the inpuit string
 * Return: 1 if is string or 0 if composite (Ends)
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - Start point 
 * @s: Specifes the input string
 * @len: Specifies the length of the string
 * Return: The reverse string (Ends)
 */
int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	else
		return (0);

}
