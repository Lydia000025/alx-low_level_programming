#include <stdio.h>
/**
 * main - function
 * Retun: 0
 */
int main(void)
{
	int i,  n[] = {0,1,2,3,4,5,6,7,8,9};

	for (i = 0; i < 10; i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
