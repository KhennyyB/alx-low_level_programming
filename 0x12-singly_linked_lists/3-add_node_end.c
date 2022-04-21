#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
  * _strdup - recreation of string duplicate function
  * @src: source of string to duplicate
  * Return: pointer to malloc'd space with copied string
  */
void *_strdup(const char *src)
{
	int len, i;
	char *dest;

	len = _strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
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
