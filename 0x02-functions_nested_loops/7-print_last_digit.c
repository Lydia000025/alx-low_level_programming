#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * return last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = (n % 10) * -1;
	else
		last_digit = n % 10;
	_putchar (last_digit + '0');
	return (last_digit);
}
