#include "lists.h"

/**
  * free_listint - free a linked list
  * @head: the head node of the linked list
  **/

void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *prev_node = head;

	if (head == NULL)
		return;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		free(prev_node);
		prev_node = current_node;
	}
}
