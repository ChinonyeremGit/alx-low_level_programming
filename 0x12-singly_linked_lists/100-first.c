#include <stdio.h>

/**
 * print_first - function to run before main function
 */
void print_first(void) __attribute__((constructor));

/* implementation of attribute*/
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
