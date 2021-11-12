#include "lists.h"

/**
 * add_nodeint_end - returns the number of elements in a list
 * @head: list
 * @n: node
 * Return: Returns NULL or the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *end;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

end = *head;

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}
while (end->next != NULL)
{
end = end->next;
}
end->next = new;
return (new);
}
