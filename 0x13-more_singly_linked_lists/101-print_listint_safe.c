#include "lists.h"

/**
  * print_listint_safe - print all the nodes in a linked list safe
  * @head: the head node of the linked list
  * Return: the numbers of nodes in the linked list in size_t
  **/

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *s_node = head;
	const listint_t *f_node = head;


	if (!head)
		exit(98);
	do {
		counter++;
		printf("[%p] %i\n", (void *)s_node, s_node->n);
		s_node = s_node->next;
		if (f_node && f_node->next && f_node->next->next)
			f_node = f_node->next->next;
		else
			f_node = NULL;
		if (s_node && s_node == f_node)
		{
			counter += loop(head, s_node, f_node);
			break;
		}
	} while (s_node != NULL);
	return (counter);
}

/**
  * loop - print the nodes until the loop restart
  * @h: the head node
  * @s_node: the static node who doesn't move
  * @d_node: the dynamic node who moves
  * Return: the numbers of prints
  **/

size_t loop(const listint_t *h, const listint_t *s_node,
const listint_t *d_node)
{
	size_t counter = 0;

	while (1)
	{
		do
			d_node = d_node->next;
		while (d_node != s_node && d_node != h);
		if (d_node == h)
			break;
		h = h->next;
	}
	while (s_node != h)
	{
		counter++;
		printf("[%p] %i\n", (void *)s_node, s_node->n);
		s_node = s_node->next;
	}
	return (counter);
}
