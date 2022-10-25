#include "lists.h"

/**
 * free_list - free linked list
 * @head: linked list
 */

void free_list(list_t *head)
{
	list_t *ptr, *prenode;

 
 	while (head != NULL) /* have ptr keep track of head node and free*/
 	{
		ptr = head;
		prenode = head;
		while (ptr->next != 0)
		{
			prenode = ptr;
			ptr = ptr->next;
		}
		if (prenode->next)
		{
			prenode->next = NULL;
		}
		if (head == ptr)
		{
			head = NULL;
			free(prenode);
		}
		free(ptr);
	}
}
