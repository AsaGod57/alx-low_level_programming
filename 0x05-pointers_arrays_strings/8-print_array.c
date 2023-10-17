#include "main.h"

/**
  * print_array - Start point
  * @a: Specifies array of integers
  * @n: Specifies the number of elements of the array for print
  * Return: void (Ends)
  */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
