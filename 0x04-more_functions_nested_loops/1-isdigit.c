#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if c is
 * * digit
 * @c: input
 * Return: 0 and 1
 * }
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
