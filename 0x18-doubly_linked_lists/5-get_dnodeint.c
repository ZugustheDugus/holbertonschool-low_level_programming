#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a specific index
 * @head: the head node
 * @index: the specific node's index
 * Return: currnode or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currnode = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i <= index && currnode != NULL)
	{
		if (i == index)
			return (currnode);
		i++;
		currnode = currnode->next;
	}
	return (NULL);
}
