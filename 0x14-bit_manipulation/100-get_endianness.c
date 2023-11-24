#include "main.h"
#include <stdio.h>

/**
  * get_endianness - Starts  processor endianness
  * Return: 0 if huge  endian, 1 if otherwise (Ends)
  */
int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
