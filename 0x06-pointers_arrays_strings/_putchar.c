#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: input parameter
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
