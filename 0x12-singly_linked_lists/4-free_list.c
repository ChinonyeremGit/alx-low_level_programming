#include "lists.h"

/**
 * free_list - free linked list
 * @head: linked list
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head) /* have ptr keep track of head node and free*/
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
