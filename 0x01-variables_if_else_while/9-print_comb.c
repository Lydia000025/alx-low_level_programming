#include<stdio.h>
/**
 * main - function
 * Return: 0
 */
int main()
{
	int n;

	for(n = 0; n < 10; n++)
	{
		putchar(n +'0');
		for(n = 0; n < 9; n++)
	{
	       putchar(',');
	       putchar(' ');
	}
	}
	putchar('\n');
return (0);
}
