#include "lists.h"

/**
 * free-listint2 - function to free list
 * @head: pointer to pointer pointing to the first node in a list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
