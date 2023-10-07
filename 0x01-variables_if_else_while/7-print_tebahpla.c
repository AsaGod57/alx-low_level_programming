#include <stdio.h>

/**
  * main - Start point
  *
  * Return: Always 0 (Ends)
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
