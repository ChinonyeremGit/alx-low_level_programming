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
	if (temp->next != NULL)
	{
		data = temp->n;
		*head = temp->next;
	}
	else
		*head = NULL;
	free(temp);
	return (data);
}
