#include <stdio.h>
/**
 * main -this is main function
 *Description: function that prints out -putchar in new line
 *Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

