#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: head node
 * @n: current node
 * Return: returns the new node, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = newnode;
	newnode->prev = current;
	return (newnode);
}
