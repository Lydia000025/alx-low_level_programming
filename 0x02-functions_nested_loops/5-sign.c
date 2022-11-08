#include "main.h"
#include <stdio.h>
/**
 * print_sign(int n) - function
 * @n: parameter
 * return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (1);
	}
	else 
	{
		putchar(48);
		return (0);
	}
}
