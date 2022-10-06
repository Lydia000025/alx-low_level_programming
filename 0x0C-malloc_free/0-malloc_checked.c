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
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
