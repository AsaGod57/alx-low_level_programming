#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion - Start point
  * @n: Specifies the number to compute square root
  * Return: The square root number
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Start point
  * @n: Specifies the number to compute the square root
  * @i: Specifies the iterate number
  * Return: The computed square root number (Ends)
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
