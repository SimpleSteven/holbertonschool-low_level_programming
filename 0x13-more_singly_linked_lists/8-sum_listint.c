#include "lists.h"

/**
  * get_nodeint_at_index - delete a node at the given position
  * @head: the first node of the linked list
  * @index: the given position
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
