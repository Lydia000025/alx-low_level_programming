#include "main.h"

/**
 * _islower : checks for lowercase
 *
 * @c: number to be checked
 * return 1 0r 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
