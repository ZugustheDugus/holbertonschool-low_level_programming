#include "lists.h"
/**
 * free_listint2 - separate way of freeing a list
 * @head: the list to be freed
 */

void free_listint2(listint_t **head)
{
listint_t *current;

while (*head != NULL)
{
current = (*head)->next;
free(*head);
*head = current;
}
*head = NULL;
}
