#include "lists.h"

/**
 * dlistint_len - function to print the number of elements in a list
 * @h: the head node
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t i = 0;

	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}
