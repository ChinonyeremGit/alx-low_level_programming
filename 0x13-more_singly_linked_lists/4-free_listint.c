#include "lists.h"

/**
 * free_listint - function to free list
 * @head: pointer to first node in list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
