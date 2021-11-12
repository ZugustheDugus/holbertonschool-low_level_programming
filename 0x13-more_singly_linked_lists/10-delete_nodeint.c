#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: list from which to delete a node
 * @index: point in the index which specifies what to delete
 * Return: -1 for failure, 1 for success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *next, *current, *temp = *head;
unsigned int i;

if (*head == NULL || head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
current = temp;
for (i = 0; i < index && temp != NULL; i++)
{
if (current->next == NULL)
{
return (-1);
}
current = current->next;
}
next = current->next;
current->next = next->next;
free(next);
return (1);
}
