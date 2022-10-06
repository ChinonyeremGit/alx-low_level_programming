#include "main.h"

/**
 * *malloc_checked - function to return an address of a memory 
 * @b: size of memory to create
 * @Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit (98);
	return (s);
}
