#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start point
 * @argc: Specifies the number of arguments
 * @argv: Specifies the array of argumentsto be recieved
 * Return: 0 on success, 1 if condition not satisfied (Ends)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
