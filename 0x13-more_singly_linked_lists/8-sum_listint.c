#include "lists.h"

/**
  * sum_listint - sum all the values of the nodes of a linked list
  * @head: the first node of the linked list
  * Return: the searched node
  **/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
