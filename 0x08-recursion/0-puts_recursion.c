#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - a function that prints a string
 * @s: input character
 */
void _puts_recursion(char *s)
{
	char *sent[3] = {
	       	"First, solve the problem. Then, write the code",
		"Talk is cheap. Show me the code",
		 " "};
	*s = *sent;
	printf("%c", *s);
}
