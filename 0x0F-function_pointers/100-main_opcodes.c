#include <stdio.h>
#include <stdlib.h>

/**
*main -  Start point
*@argc: Specifies the number of arguments passed
*@argv: Specifies array of arguments
*Return: 1 successful  or 2 if unsuccessful
*/

int main(int argc, char *argv[])
{

int index, bytes;
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

for (index = 0; index <  bytes; index++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (index == bytes - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}
