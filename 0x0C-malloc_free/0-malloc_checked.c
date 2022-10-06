#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -function
 * @b: int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
