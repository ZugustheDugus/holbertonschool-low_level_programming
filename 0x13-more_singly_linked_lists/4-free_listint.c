#include "lists.h"

/**
 * free_listint - frees memory allocated to listint_t
 * @head: the list for which memory is being freed
 *
 *
 */

void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
