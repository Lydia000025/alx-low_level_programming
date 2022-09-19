#include "main.h"
/**
 * print_rev - a function that prints a string
 * in reverse, followed by a new line,
 * @s: input parameter
 * Return: void.
 */
void print_rev(char *s)
{
	int i = 0, j, right;

	while (s[i])
		i++;

	j = i / 2;
	right = 0;

	while (right != j)
	{
		char temp s[right];
		int left = i - right - 1;

		s[right] = s[left];
		s[left] = temp;

		right++;
	}
}
