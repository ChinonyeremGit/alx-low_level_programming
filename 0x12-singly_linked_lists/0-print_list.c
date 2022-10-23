#include "lists.h"

/**
 * print_list - function to print the elements of a linked list
 * @h: head pointeer to the first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			number_of_nodes++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			number_of_nodes++;
		}
		h = h->next;
	}
	return (number_of_nodes);
}
