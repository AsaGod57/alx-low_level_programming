#include <unistd.h>

/**
 * _putchar - Starts to write the character c to stdout
 * @c: Specifies the character to print
 * Return: 1 on success or -1 if otherwise (Ends)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
