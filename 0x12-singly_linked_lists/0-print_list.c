#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print all elements of 'list_t' list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
