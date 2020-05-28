#include "lists.h"

/**
  * free_list - free a linked list
  * @head: the head node of the linked list
  **/

void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *prev_node = head;

	if (head == NULL)
		return;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		free(prev_node);
		prev_node = current_node;
	}

}
