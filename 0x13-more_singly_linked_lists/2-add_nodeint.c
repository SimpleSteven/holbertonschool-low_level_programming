#include "lists.h"

/**
  * add_nodeint - add a node at the beginning of the linked list
  * @head: the head node of he linked list
  * @n: the int value to add to the new node
  * Return: the addres of the new_node or NULL if it fail
  **/

list_t *add_nodeint(listint_t **head, const int *n)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
