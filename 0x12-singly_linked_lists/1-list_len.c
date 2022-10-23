#include "lists.h"

/**
 * list_len - function to return the number of elements in a linked list
 * @h: temp head pointing to first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}

