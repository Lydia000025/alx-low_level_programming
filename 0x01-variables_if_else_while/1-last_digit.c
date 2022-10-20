#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - function
 * Retrun: 0
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l == 0)
	{
		printf("%s", "Last digit of ");
		printf("%i", n);
		printf("%s", " is ");
		printf("%i", l);
		printf("%s", " and is 0");
	}
	 else if (l > 5)
	 {
		  printf("%s", "Last digit of "); 
		  printf("%i", n);
		  printf("%s", " is ");
		  printf("%i", l);
		  printf("%s", " and is greater than 5");
	 }
	else 
	{
		printf("%s", "Last digit of ");
		printf("%i", n);
		printf("%s", " is ");
		printf("%i", l);
		printf("%s", " and is less than 6 and not 0");
	}
}
