#include "lists.h"

/**
  * pop_listint - delete the first node of a linked list
  * @head: the first node of the linked list
  * Return: the data of the deleted node
  **/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp_node;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	tmp_node = (*head)->next;
	free(*head);
	*head = tmp_node;
	return (data);
}
