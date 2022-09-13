#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Description - alphabet game.
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char c= 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
