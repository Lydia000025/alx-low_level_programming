#include "main.h"

/**
 * rev_string - a function that prints every other character of
 * a string, starting with the first character, followed by a new line.
 * @s: input parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)

		i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}

