#include "main.h"

/**
 * *_realloc - function that reallocates a memory block using malloc and
(* @ptr: pointer to the memory previously allocated with a call to malloc:
 * malloc(old_size))
 * @old_size: size in bytes of the allocated space to ptr
 * @new_size: size in bytes of the space that will be reallocated
 * Return: pointer to a string on success.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int min, i;

	if (old_size <= 0 || new_size <= 0)
		return (NULL);
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	min = (old_size < new_size ? old_size : new_size);
	for (i = 0; i < min; i++)
	{
		*((char *)arr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (arr);
}
