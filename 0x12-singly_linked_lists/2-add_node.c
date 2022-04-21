#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - add a new node at the beginning of 'list_t' list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int c;

	for (c = 0; dup_str[c] != '\0'; c++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = c;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}	
