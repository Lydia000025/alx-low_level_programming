#include <stdio.h>
/**
 * main -function
 * Return: 0
 */
int main(void)
{
	int n;
	
	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (n = 'a'; n < 'g'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
