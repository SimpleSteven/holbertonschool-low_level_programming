#include "lists.h"

/**
  * add_nodeint_end - add a node at the end of the linked list
  * @head: the head node of he linked list
  * @n: the string to add to the new node
  * Return: the addres of the new_node or NULL if it fail
  **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	temp_node = *head;
	while (temp_node->next != NULL)
		temp_node = temp_node->next;
	temp_node->next = new_node;
	return (new_node);
}
