#include <string.h>
#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string to look for the first matching byte
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
