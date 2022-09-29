#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - a function that prints a string
 * @s: input character
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	putchar('\n');
}
else
{
	putchar(*s);
	_puts_recursion(s + 1);
}
}
