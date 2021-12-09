#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at an index
 * @head: head node
 * @index: node to delete at the index
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempnode;
	dlistint_t *prevnode, *nextnode;
	unsigned int x;

	if (!head || !*head)
		return (-1);
	tempnode = *head;
	if (index == 0)
	{
		nextnode = tempnode->next;
		if (nextnode != NULL)
			nextnode->prev = NULL;
		free(tempnode), *head = nextnode;
		return (1);
	}
	tempnode = tempnode->next;
	for (x = 1; tempnode != NULL; x++)
	{
		if (x == index)
		{
			if (tempnode->next == NULL)
			{
				prevnode = tempnode->prev, prevnode->next = NULL;
			}
			else
			{
				prevnode = tempnode->prev, nextnode = tempnode->next;
				prevnode->next = nextnode, nextnode->prev = prevnode;
			}
			free(tempnode);
			return (1);
		}
		if (tempnode->next == NULL)
			return (-1);
		tempnode = tempnode->next;
	}
	return (-1);
}
