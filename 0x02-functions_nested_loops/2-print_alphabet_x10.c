#include <stdio.h>
/**
 * print_alphabet_x10 - function
 */
void print_alphabet_x10(void)
{
	int j, i;
	char n[] = "abcdefghijklmnopqrstuvwxyz";
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <26; i++)
		{
		putchar(n[i]);
		}
	}
	putchar('\n');
}
