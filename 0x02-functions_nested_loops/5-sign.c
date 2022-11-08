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
		putchar('+');
		putchar('1');
	}
	else if (n < 0)
	{
		putchar('-');
		putchar('1');
	}
	else 
	{
		putchar('0');
		putchar('0');
	}
return (0);
}
