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


	printf("Size of a char: 1 byte(s)\n");
	printf("Size of an int: 4 byte(s)\n");
	printf("Size of a long int: ");
	printf("%li", sizeof(c));
	printf(" byte(s)\n");
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: 4 byte(s)\n");
	return (0);
}

