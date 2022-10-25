#include <stdio.h>
/**
 * print_alphabet_x10 - function
 */
void print_alphabet_x10(void)
{
	int i, j;
	char n[] = "abcdefghijklmnopqrstuvwxyz";
	
	while (j < 11)
	{
		for (i = 0; i <26; i++)
		{
		putchar(n[i]);
		}
		j++;
	}
	putchar('\n');
}
