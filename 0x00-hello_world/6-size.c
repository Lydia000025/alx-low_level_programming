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
	printf(" byte(s)\n");
	printf("\nSize of an int: ");
	printf("%li", sizeof(b));
	printf(" byte(s)");
	printf("\nSize of a ling int: ");
	printf("%li", sizeof(c));
	printf(" byte(s)");
	printf("\nSize of a long long: ");
	printf("%li", sizeof(d));
	printf(" byte(s)");
	printf("\nSize of a float: ");
	printf("%li", sizeof(e));
	printf(" byte(s)\n");
	return (0);
}

