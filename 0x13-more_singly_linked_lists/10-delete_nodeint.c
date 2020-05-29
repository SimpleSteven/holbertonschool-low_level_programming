#include "lists.h"

/**
  * delete_nodeint_at_index - delete a node at a given position
  * @head: the first node of the linked list
  * @index: the given position
  * Return: 1 in succes and -1 if it fails
  **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current_node = *head;
	listint_t *tmp_node;

	if (!*head)
		return (1);
	if (index == 0)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			free(current_node);
		}
		else
		{
			free(current_node);
			*head = NULL;
		}
		return (1);
	}
	while (current_node && count + 1 < index)
	{
		count++;
		current_node = current_node->next;
	}
	if (!current_node || !current_node->next)
		return (-1);
	tmp_node = current_node->next;
	current_node->next = current_node->next->next;
	free(tmp_node);
	return (1);
}
