#include <unistd.h>

/**
  * main - Start point
  *
  * Return: Always 0 (Ends)
  */
int _putchar(char c)

{
        return (write(1, &c, 1));
}
