#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node to a specific index
 * @head: the list
 * @idx: index
 * @n: number of the node in the index
 * Return: either NULL or the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *current, *new = malloc(sizeof(listint_t));

if (head == NULL || new == NULL)
{
return (NULL);
}
new->n = n;
if (idx != 0)
{
current = *head;
for (i = 0; i < idx - 1; i++)
{
if (current == NULL || current->next == NULL)
{
return (NULL);
}
current = current->next;
}
}
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = current->next;
current->next = new;
return (new);
}
