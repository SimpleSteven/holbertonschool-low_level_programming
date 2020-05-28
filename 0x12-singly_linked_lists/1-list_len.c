#include "lists.h"

/**
  * list_len - count all the the nodes in a linked list
  * @h: the head node of the linked list
  * Return: the numbers of nodes in the linked list in size_t
  **/

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
