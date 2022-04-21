#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
  * add_node_end - add new nodes to the end of the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	char *c;

	if (str == NULL)
		return (NULL);
	dupstr = _strdup(str);
	if (c == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = c;
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	current = current->next;
	current->next = new_node;

	return (*head);
}
