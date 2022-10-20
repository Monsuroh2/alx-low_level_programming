#include <stdio.h>

/**
 * before_main - Prints something before main
 *
 * Return: Null Void
 */

void __attribute__ ((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
