#include "main.h"

/**
 * _strlen - to calculate the length of a string
 * @s: a pointer to the string
 *
 * Return: returns the length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
