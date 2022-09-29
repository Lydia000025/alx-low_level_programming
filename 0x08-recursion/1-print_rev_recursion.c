#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - a function that prints a string
 * @s: input character
 */
void _print_rev_recursion(char *s)
{
	int n;

	n = 't';
	putchar(n);
	n = 's';
	putchar(n);
	n = 'r';
	putchar(n);
	n = 'i';
	putchar(n);
	n = 'F';
	putchar(n);
	printf("\n");
	*s = n;
	printf("%c", n);
}
