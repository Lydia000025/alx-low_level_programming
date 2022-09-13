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
	while (i < 9)
	{
		_putchar(output[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
