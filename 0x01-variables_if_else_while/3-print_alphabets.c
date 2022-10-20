#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int l = 97 , i, u;
	
	for (i = 0; i < 25; i++)
	{
		putchar(l);
		u = l - 32;
		putchar(u);
		putchar('\n');
	}
		return (0);
}
