#include "lists.h"

/**
 * free_dlistint -  frees a list
 * @head: pointer to head of the list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nex = head;

	if (head == NULL)
		;
	else if (head->next == NULL)
		free(head);
	else
	{
		while (nex != NULL)
		{
			nex = nex->next;
			free(head);
			head = nex;
		}
	}
}
