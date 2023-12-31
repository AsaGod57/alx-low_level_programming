#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Start point
 * @n: Specifies the number of arguments
 * Return: Sum of arguments(Ends)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	va_start(list, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
