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
int i = (*head)->n;

if (*head == NULL)
return (0);

current = (*head)->next;
free(*head);
*head = current;

return (i);
}
