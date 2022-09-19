#include "main.h"

/**
 * puts2 - a function that prints every other character of
 * a string, starting with the first character, followed by a new line.
 * @str: input parameter
 * Return: void
 */
void rev_string(char *s)
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

