#include "main.h"
/**
 * main - Print "_putchar"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char output[] = "_putchar";

	for( i = 0; i < 8; i++)
	{
	_putchar(output[i]);
	}
	_putchar('\n');
	return (0);
}
