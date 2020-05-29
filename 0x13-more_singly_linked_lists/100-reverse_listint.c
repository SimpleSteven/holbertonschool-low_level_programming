#include "lists.h"

/**
  * reverse_listint - reverse a linked list
  * @head: the first node of the linked list
  * Return: the first pointer of the linked list reversed
  **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *prev_node = *head;

	if (!*head)
		return (NULL);
	if (current_node->next)
		current_node = current_node->next;
	else
		return (*head);
	_rev(head, current_node, prev_node);
	prev_node->next = NULL;
	return (*head);
}

/**
  * _rev - reverse the linked list with recursion
  * @head: the head of the linked list
  * @c_node: the current node
  * @p_node: thw previous node
  * Return: something, doesn't care really
  **/

int _rev(listint_t **head, listint_t *c_node, listint_t *p_node)
{
	if (c_node->next)
		_rev(head, c_node->next, p_node->next);
	if (!c_node->next)
		*head = c_node;
	c_node->next = p_node;
	return (1);
}
