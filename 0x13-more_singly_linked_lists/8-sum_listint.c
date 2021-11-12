#include "lists.h"

/**
 * sum_listint - print a sum of a linked list of ints
 * @head: The list of ints in question
 * Return: 0 or the sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;

if (head == NULL)
{
return (0);
}

while (head != NULL)
{
sum = head->n + sum;
head = head->next;
}
return (sum);
}
