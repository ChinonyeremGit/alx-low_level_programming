#include "main.h"

/**
 * *array_range - function to create an array of integers
 * @min: minimum range of numbers to be stored in the array
 * @max: max number tpo be stored
(* Return: array of integers on success, NULL if min > max, NULL if malloc
 * fails)
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, n;

	n = max - min + 1;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= n; i++)
		arr[i] = min++;
	return (arr);
}
