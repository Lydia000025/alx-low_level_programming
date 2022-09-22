#include "main.h"

/**
 * _strcat - concatenates wto strings
 *
 * @dest: input parameter
 * @src: second input parameter
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = -1;

	for (i = 0; dest[i] != '\0'; i++)

	do {
		j++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
