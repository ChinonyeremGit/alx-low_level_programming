#include "lists.h"

/**
 * print_listint - function to print the datas in a linked list
 * @h: pointer to the head of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
