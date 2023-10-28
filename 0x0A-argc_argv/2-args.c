#include "main.h"
#include <stdio.h>

/**
 * main - Start point
 * @argc: Specifies the number of arguments
 * @argv: Specifies the arguments to be received
 * Return: 0 for successful exit (Ends)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
