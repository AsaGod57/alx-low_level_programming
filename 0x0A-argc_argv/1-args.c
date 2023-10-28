#include "main.h"
#include <stdio.h>

/**
 * main - Start point
 * @argc: Specifies the Arg count
 * @argv: Specifies the array of arg strings
 * Return: 0 for successful exit (Ends)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
