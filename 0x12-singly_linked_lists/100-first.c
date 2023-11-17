#include <stdio.h>

/**
 * before_main - Function executed before main function.
 * It prints "You're beat! and yet, you must allow,"
 * and "I bore my house upon my back!".
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

