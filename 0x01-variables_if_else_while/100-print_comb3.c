#include <stdio.h>
/**
 * main - fuction
 * Return: 0
 */
int main()
{
	int n, k;

	for (n = 0; n < 10; n++)
	{
		putchar(n +'0');
		for (k = 0; k < 10; n++)
		{
			putchar(k + '0');
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n')

