#include <stdio.h>
/**
 * main - fuction
 * Return: 0
 */
int main()
{
	int n, k=0;

	for (n = 0; n < 10; n++)
	{
		putchar(n +'0');
		while (k < 10)
		{
			putchar(k + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

