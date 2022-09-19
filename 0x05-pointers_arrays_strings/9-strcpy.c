#include "main.h"

/**
 * *_strcpy - copies the string
 * pointed
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
