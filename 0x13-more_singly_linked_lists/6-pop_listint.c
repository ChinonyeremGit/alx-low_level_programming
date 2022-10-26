#include "lists.h"

/**
 * pop_listint - function to pop the head of a function
 * @head: pointer to pointer pointing to first node
 * Return: value in hea before popping
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;
	if (temp == NULL)
		return (0);
	data = temp->n;
	if (temp->next != NULL)
		*head = temp->next;
	else
		*head = NULL;
	free(temp);
	return (data);
}
