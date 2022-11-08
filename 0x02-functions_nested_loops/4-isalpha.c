#include "main.h"
#include <stdio.h>
/**
 * _isalpha - function
 * @c: parameter
 * return: 0
 */
int _isalpha(int c)
{
	if (c < 'z' && c > 'A')
		return (1);
	else
		return (0);
}
