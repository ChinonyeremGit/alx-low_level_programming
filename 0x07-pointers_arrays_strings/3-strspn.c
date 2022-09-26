#include "main.h"
#include <string.h>

/**
 * _strspn - function to get the lenght of a prefix string
 * @s: string to search string
 * @accept: string to use for testing
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if (s == NULL || accept == NULL)
		return (len);
	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
