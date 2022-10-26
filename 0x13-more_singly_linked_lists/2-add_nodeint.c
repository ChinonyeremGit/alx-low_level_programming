#include "lists.h"

/**
 * add_nodeint - function to add node at beggining
 * @head: pointer to head
 * @n: element to be stored in node
 * Return: address to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
	}
	*head = new;
	return (new);
}
