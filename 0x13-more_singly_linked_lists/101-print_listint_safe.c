#include "lists.h"
/**
 * get_count_and_address - function to get count/address from a loop
 * @head: head
 * Return: structure to contain the address and count
 */
count_address get_count_and_address(const listint_t *head)
{
	count_address s;
	const listint_t *p, *q;
	size_t count = 0;
	int loop = 0;

	p = q = head;
	while (p && q && q->next && p != q)
	{
		if (loop == 0)
		{
			p = p->next;
			q = q->next->next;
		}
		count++;
		if (p == q)
		{
			q = head;
			loop = 1;
		}
		if (loop == 1)
		{
			p = p->next;
			q = q->next;
		}
	}
	if (count == 0)
		s->address = NULL;
	else
		s->adress = p;
	count++;
	s->count = count;
	return (s);
}

/**
 * print_listint_safe - function to print list
 * @head: head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	count_address loop;
	const listint_t *temp;
	size_t i, nodes = 0;

	temp = head;
	if (temp == NULL)
		exit(98);
	loop = get_count_and_address(head);
	if (loop->count > 1)
	{
		for (i = 0; i < loop->count; i++)
		{
			printf("[%p] %d", (void *)temp, temp->n);
			temp = temp->next;
		}
	}
	else
	{
		while (temp->next != NULL)
		{
			printf("[%x] %d", temp, temp->n);
			nodes++;
			temp = temp->next;
		}
		if (temp->next == NULL)
			printf("[%x] %d", temp, temp->n);
	}
	return (nodes);
}
