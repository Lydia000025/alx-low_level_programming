#include <stdio.h>
/**
 * beforeMain - function
 */
void __attribute__((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow,\n%s", "I bore my house upon my back!\n");
}
