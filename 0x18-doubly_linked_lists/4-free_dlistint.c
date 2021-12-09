#include "lists.h"

/**
 * free_dlistint - frees a list of nodes
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *newnode;

	while (head)
	{
		newnode = head->next;
		free(head);
		head = newnode;
	}
}
