#include <stdio.h>
/**
 * main - fuction
 * Return: 0
 */
int main()
{
	int n, k;

	for (n = 0, k = 0; n < 10, k < 10; n++, k++)
	{
		putchar(n +'0');
		putchar(k + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

