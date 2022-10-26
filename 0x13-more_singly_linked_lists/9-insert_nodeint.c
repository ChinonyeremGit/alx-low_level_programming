#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node
 * @head: head
 * @idx: position to insert
 * @n: value to insert
 * Return: address of newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int len = 0;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	temp = *head;
	while (len < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		len++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
