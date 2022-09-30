#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function
 * @n: input
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n - 1));
}

/**
 * square - function 2
 * @n: intput 2
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);
}
