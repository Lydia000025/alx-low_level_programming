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


	printf("%s", "Size of a char: ");
	printf("%li", sizeof(a));
	printf("%s"," byte(s)\n");
	printf("%s", "Size of an int: ");
	printf("%li", sizeof(b));
	printf("%s"," byte(s)\n");
	printf("%s", "Size of a ling int: ");
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

