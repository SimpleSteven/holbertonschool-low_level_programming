#include "lists.h"

/**
  * insert_nodeint_at_index - sum all the values of the nodes of a linked list
  * @head: the first node of the linked list
  * @idx: the given position
  * @n: the value of the new node
  * Return: the searched node
  **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = (*head);
	listint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	while (current_node && count + 1 <= idx)
	{
		count++;
		current_node = current_node->next;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
