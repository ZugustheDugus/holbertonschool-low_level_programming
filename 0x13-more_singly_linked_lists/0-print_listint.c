#include "lists.h"

/**
 * print_listint - Prints a list of ints
 * @h: head, which determines which ints
 * Return: Returns the value of the indexer after it has indexed through h
 */

size_t print_listint(const listint_t *h)
{
const listint_t *current = h;
size_t i = 0;

while (current != NULL)
{
printf("%d\n", current->n);
i++;
current = current->next;
}
return (i);
}
