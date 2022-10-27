#include "lists.h"

/**
 * reverse_listint - function to reverse a list
 * @head: head pointer
 * Return: adrres of first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentnode, *nextnode;

	currentnode = nextnode = *head;
	*head = NULL;
	while (currentnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = *head;
		*head = currentnode;
		currentnode = nextnode;
	}
	return (*head);
}
