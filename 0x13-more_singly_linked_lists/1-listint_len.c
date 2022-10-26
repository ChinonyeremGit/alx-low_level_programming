#include "lists.h"

/**
 * listint_len - function to return thr lenght of a list
 * @h: pointer to head of list
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t len = 0;

	temp = h;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
