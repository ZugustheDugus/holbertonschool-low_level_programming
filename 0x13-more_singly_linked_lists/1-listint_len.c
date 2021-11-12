#include "lists.h"
/**
 * listint_len - prints the length of a list of ints
 * @h: head, which contains the list of ints
 * Return: Returns "i", the indexing variable which is the length of h
 */
size_t listint_len(const listint_t *h)
{
const listint_t *current = h;
int i = 0;

while (current != NULL)
{
i++;
current = current->next;
}
return (i);
}
