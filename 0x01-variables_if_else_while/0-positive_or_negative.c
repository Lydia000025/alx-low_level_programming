#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - function
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%i", n);
		printf("%s", " is zero\n");
	}
	else if (n < 0)
	{
	       	printf("%-i", n);
		printf("%s", " is negative\n");
	}
	else
	{
		printf ("%i", n);
		printf("%s", " is positive\n");
	}
	return (0);
}

