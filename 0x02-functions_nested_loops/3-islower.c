#include "main.h"
#include <stdio.h>
/**
 * _islower - function
 * @c: parameter
 * return: 0
 */
int _islower(int c)
{
	if (c < 'z' && c > 'a')
		return (1);
	else
		return (0);
}
