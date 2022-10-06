#include "main.h"
#include <stdlib.h>
/**
 * *_memset - funtction memory with a constant byte
 * @s: pointer
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
