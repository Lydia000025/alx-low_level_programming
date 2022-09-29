#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - a function that prints a string
 * @s: input character
 */
void _puts_recursion(char *s)
{
	int n;

	n = 'F';
	putchar(n);
	n = 'i';
	putchar(n);
	n = 'r';
	putchar(n);
	n = 's';
	putchar(n);
	n = 't';
	putchar(n);
	n = ' ';
	putchar(n);
	n = 'w';
	putchar(n);
	n = 'r';
	putchar(n);
	n = 'i';
	putchar(n);
	n = 't';
	putchar(n);
	n = 'e';
	putchar(n);
	*s = n;
	printf("%d", n);
}
