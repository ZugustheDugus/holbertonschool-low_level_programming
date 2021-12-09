#include "lists.h"

/**
 * print_dlistint_backward - prints dlistint backwards
 * @h: head node
 * Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *currnode = h;
	size_t i = 0;

	while (currnode)
	{
		i++;
		if (currnode->next == NULL)
			break;
		currnode = currnode->next;
	}
	while (currnode)
	{
		printf("%d\n", currnode->n);
		currnode = currnode->prev;
	}
	return (i);
}
