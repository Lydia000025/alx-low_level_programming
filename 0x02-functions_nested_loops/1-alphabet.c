#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - alphabet game printing alphabet followed by new line.
 * Return: void
 */
void print_alphabet(void)
{

	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
