#include "main.h"

/**
  * swap_int - Start point
  * @a: Specifies an integer to swap
  * @b: Specifies another integer to swap
  * Return: void (Ends)
  */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
