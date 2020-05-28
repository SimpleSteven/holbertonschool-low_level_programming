#include "lists.h"

/**
  * add_node_end - add a node at the end of the linked list
  * @head: the head node of he linked list
  * @str: the string to add to the new node
  * Return: the addres of the new_node or NULL if it fail
  **/

list_t *add_node_end(list_t **head, const char *str)
{
	int counter = 0;
	list_t *new_node;
	list_t *temp_node;
	char *new_str;

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);
	for (; new_str[counter] != '\0'; counter++)
	{}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = new_str;
	new_node->len = counter;
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
