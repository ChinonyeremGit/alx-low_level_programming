#include "main.h"

/**
 * swap_int - swaps the number between two variables using pointers
 * @a: int a
 * @b: int b
 *
 * Return: null.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
