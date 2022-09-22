#include "main.h"

/**
 * _strcat - concatenates wto strings
 * @dest: input parameter
 * @src: second input parameter
 * Return:pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
