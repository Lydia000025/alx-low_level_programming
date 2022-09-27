#includ "main.h"

/**
 * *_memeset - function filling with constant byte
 * @s: input
 * @b: constant
 * @n: max byte
 * Return: s
 */
char *_memeset(char *s, char b, unsinged int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
