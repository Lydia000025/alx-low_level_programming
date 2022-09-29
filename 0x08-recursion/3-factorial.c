#include "main.h"
#include <stdio.h>
/**
 * factorial - a funtion that gives factorial
 * @n: input number
 * @return: int
 */
int factorial(int n)
{
	int factorial;

	printf("Enter an integer");
	scanf("%d", &n);
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		factorial = n * factorial;
		n--;
		printf("%d", n);
	}
	else
		return (1);
}
