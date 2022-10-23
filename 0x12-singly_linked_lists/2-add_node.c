#include "lists.h"

/**
 * add_node - function to insert new node
 * @head: pointer to node
 * @str: string
 * Return: address of new elementt
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);
	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (head == NULL)
		newnode->next = NULL;
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
