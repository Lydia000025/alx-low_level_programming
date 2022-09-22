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
	int i = 0;
	int i = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}
