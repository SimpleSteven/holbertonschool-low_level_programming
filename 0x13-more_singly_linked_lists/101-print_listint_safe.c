#include "lists.h"

/**
  * print_listint_safe - print all the nodes in a linked list safe
  * @head: the head node of the linked list
  * Return: the numbers of nodes in the linked list in size_t
  **/

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *tmp_node = head;


	if (!head)
		exit (98);
	do{
		counter++;
		printf("[%p] %i\n", (void *)tmp_node, tmp_node->n);
		tmp_node = tmp_node->next;
		if (head && head->next && head->next->next)
			head = head->next->next;
		else
			head = NULL;
	}while (tmp_node != NULL && head != tmp_node);
	return (counter);
}
