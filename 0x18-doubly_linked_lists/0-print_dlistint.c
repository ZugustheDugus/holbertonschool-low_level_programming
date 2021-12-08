#include "lists.h"

/**
 * print_dlistint - print a list of nodes
 * @h: The Head Node
 * Return: The numeber of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
