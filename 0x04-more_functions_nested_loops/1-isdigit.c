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
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
