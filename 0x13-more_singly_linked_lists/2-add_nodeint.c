#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: list of nodes
 * @n: number index for each node
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;

node = malloc(sizeof(listint_t));

if (node == NULL)
{
return (NULL);
}

node->n = n;
node->next = *head;

*head = node;

return (node);
}
