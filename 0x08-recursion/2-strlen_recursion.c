#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - function that gives string legth
 * @s: input parameter
 * Return: int;
 */
int _strlen_recursion(char *s)
{
	int size = 0;

	if (*s > '\0')
	{
		size += _strlen_recursion(s + 1) + 1;
	}
	return (size);
}
