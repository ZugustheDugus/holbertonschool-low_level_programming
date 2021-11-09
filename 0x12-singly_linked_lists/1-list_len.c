#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * list_len - list the  number of elements in a linked list
 * @h: head
 * Return: return the number of nodes
 */

size_t list_len(const list_t *h)
{
const list_t *tmp = h;
int no;

no = 0;
while (tmp != NULL)
{
no++;
tmp = tmp->next;
}
return (no);
}
