#include "main.h"

/**
* *_memset - fills the first n bytes of a memory
* @s: array to be filled
* @b: character to be used to fill the array
* @n: number of places to fill
*
* Return: 0.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}

