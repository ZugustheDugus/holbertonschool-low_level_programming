#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function to add a  new node at beginning of a list
 * @head: head
 * @str: string
 * Return: returns address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);

new->next = *head;
*head = new;

return (new);
}
