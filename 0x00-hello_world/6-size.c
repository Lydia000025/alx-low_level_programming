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


	printf("Size of a char: 1 byte(s)");
	printf("Size of an int: 4 byte(s)");
	printf("Size of a long int: 4 bytes(s)");
	printf("%li", sizeof(c));
	printf("%s", " byte(s)\n");
	printf("%S", "Size of a long long: ");
	printf("%li", sizeof(d));
	printf("%s"," byte(s)\n");
	printf("%s", "Size of a float: ");
	printf("%li", sizeof(e));
	printf("%s"," byte(s)\n");
	return (0);
}

