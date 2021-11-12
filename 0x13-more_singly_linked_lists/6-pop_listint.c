#include "lists.h"
/**
 * pop_listint - populates a list
 * @head: List to populate
 * Return: Returns 0, or the length of the list after population
 *
 */

int pop_listint(listint_t **head)
{
listint_t *current;
int i;

if (*head == NULL)
return (0);

else
{
current = *head;
*head = (*head)->next;
i  = current->n;
free(current);
}
return (i);
}
