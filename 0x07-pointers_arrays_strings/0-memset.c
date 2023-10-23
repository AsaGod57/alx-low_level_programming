#include "Main.h"
#include <stdio.h>
/**
  * _memset - Start point
  * @s: Specifies memory area to fill
  * @b: Specifies constant byte to fill
  * @n: Specifies bytes of memory area to fill
  * Return: Memory area filled (Ends)
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
