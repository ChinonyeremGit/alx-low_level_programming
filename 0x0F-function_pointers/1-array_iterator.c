#include "function_pointers.h"

/**
 * array_iterator - a fuction to print the elments of an array
 * @array: array to print
 * @size: size of array
 * @action: pointer to function to print the elements of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
