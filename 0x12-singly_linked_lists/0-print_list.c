#include "lists.h"

/**
  * print_list - print all the nodes in a linked list
  * @h: the head node of the linked list
  * Return: the numbers of nodes in the linked list in size_t
  **/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (counter);
}
