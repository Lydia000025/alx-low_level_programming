#include <unistd.h>

/**
 * _putchar - write the char cto
 * stdout
 * @c: the character to sprit
 *
 * Return: on sucess 1.
 * on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
