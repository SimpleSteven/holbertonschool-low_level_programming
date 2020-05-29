#include "lists.h"

/**
  * get_nodeint_at_index - delete a node at the given position
  * @head: the first node of the linked list
  * @index: the given position
  * Return: the searched node
  **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current_node = head;

	while (count != index && current_node)
	{
		count++;
		current_node = current_node->next;
	}
	if (!current_node)
		return (NULL);
	return (current_node);
}
