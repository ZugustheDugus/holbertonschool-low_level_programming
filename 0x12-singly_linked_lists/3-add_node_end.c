#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at end of a list
 * @head: head
 * @str: string
 * Return: returns address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *end;

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
end = *head;

new->str = strdup(str);
new->len = strlen(str);
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
