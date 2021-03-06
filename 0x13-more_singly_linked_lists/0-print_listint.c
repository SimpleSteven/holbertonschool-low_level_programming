#include "lists.h"

/**
  * print_listint - print all the nodes in a linked list
  * @h: the head node of the linked list
  * Return: the numbers of nodes in the linked list in size_t
  **/

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (counter);
}
