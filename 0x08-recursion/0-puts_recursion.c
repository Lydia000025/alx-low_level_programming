#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - a function that prints a string
 * @s: input character
 */
void _puts_recursion(char *s)
{
	char *sent = "First, solve the problem. Then, write the code";
	*s =*sent;
	printf("%c", *s);
}
