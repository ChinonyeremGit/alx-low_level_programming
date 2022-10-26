#include "lists.h"

/**
 * get_nodeint_at_index - function to get the address at a given position
 * @head: pointer to first node
 * @index: index to return its address
 * Return: Address of nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int len = 0;

	temp = head;
	if (index == 0)
		return (temp);
	while (len < index - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		len++;
	}
	return (temp->next);
}
