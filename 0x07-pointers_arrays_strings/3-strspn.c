#include "main.h"

/**
 * int_strspn - function get length
 * @s: input
 * @accept: input
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] <= accept[i]; i++)
	{
		return (i);
	}
	return ('\0');
}

