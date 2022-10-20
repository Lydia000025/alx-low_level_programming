#include <stdio.h>
#include <stdlib.h>
int mani(void)
{
	int l, u;
	
	if ( l < 122 || l > 97)
	{
		putchar(l);
		u = l + 32;
		putchar(u);
		putchar('\n');
	}
	return (0);
}

