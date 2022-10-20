#include <stdio.h>
#include <stdlib.h>
int mani(void)
{
	int l, u;
	
	if( l > 97 && l < 122)
	{
		int i;
		for(i = 0; i < (l - 32); i++)
		{
			putchar(l);
			u = l + 32;
			putchar(u);
			putchar('\n');
		}
	return (0);
}
}
