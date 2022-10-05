#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array initialized with a specific char
 * @size: size of array
 * @c: char to initialize the array
 * Return: NULL if size = 0 or a pointer to the initialized array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * (sizeof(c)));

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

