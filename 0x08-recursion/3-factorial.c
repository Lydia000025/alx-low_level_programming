#include "main.h"
#include <stdio.h>
/**
 * factorial - finds factoial
 * @n: integer
 * Return: int
 */
int factorial(int n)
{
	int num;

	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
