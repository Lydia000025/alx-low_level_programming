#include <stdio.h>
/**
 * main -funtction
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;


	printf("Size of a char: ");
	printf("%li", sizeof(a));
	printf("\nSize of an int: ");
	printf("%li", sizeof(b));
	printf("\nSize of a ling int: ");
	printf("%li", sizeof(c));
	printf("\nSize of a long long: ");
	printf("%li", sizeof(d));
	printf("\nSize of a float: ");
	printf("%li", sizeof(e));
	return (0);
}

