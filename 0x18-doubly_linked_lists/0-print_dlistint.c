#include "lists.h"

/**
 * print_dlistint - print a list of nodes
 * @h: The Head Node
 * Return: The numeber of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t i = 0;

	while (node)
	{
		i++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (i);
}
