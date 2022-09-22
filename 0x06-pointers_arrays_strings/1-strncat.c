#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: input parameter
 * @src: scond input parameter
 * @n: third input parameter
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (int j = 0; dest[j] != '\0'; j++)
	for (int i = 0; src[i] != '\0' && i < n; i++)
		dest[j + i] = src[j];
	dest[j + i] = '\0';
	return (dest);
}
