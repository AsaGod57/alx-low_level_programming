#include "main.h"
#include <stdio.h>

/**
  * print_array - Start point
  * @a: Specifies array of integers
  * @n: Specifies the number of elements of the array for print
  * Return: void (Ends)
  */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
