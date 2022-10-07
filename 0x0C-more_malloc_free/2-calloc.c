#include "main.h"

/**
 * *_calloc - fuinction that allocates memory for an array using malloc
 * @nmemb: element size of array
 * @size: data type size of array
(* Return: NULL if nmemb or size is 0, pointer to memory on success or Null
 * if malloc fails.)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*arr)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
