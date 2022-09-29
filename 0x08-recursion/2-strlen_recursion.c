#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - function that gives string legth
 * @s: input parameter
 * Return: int;
 */
int _strlen_recursion(char *s)
{
	char sent[50] = "First write the code. Then ";
	*s = *sent;
	printf("length is: %ld", strlen(sent));
	return (0);
}
