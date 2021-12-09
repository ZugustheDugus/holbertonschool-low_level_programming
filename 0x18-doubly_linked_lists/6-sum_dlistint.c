#include "lists.h"

/**
 * sum_dlistint - sums the values of a list of nodes
 * @head: the head node
 * Return: Returns the sum or 0 to indicate no values
 */

int sum_dlistint(dlistint_t *head)
{

	int x = 0;

	if (!head)
		return (0);

	while (head)
	{
		x = x + head->n;
		head = head->next;
	}
	return (x);
}
