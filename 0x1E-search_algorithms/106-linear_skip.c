#include "search_algos.h"

/**
 * linear_skip - linear search in a skip list
 * @list: pointer to linked list being searched
 * @value: value to search for
 * Return: found index or NULL if not found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL;

	if (list)
	{
		temp = list;
		while (temp->express)
		{
			printf("Value checked at index [%lu] = [%i]\n",
					temp->express->index, temp->express->n);
			if (temp->express->n >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
						temp->index, temp->express->index);
				break;
			}
			temp = temp->express;
		}
		if (!temp->express)
		{
			list = temp;
			while (list->next)
				list = list->next;
			printf("Value found between indexes [%lu] and [%lu]\n",
					temp->index, list->index);
		}
		list = temp;
		while (list != temp->express)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			list->index, list->n);
			if (list->n == value)
				break;
			list = list->next;
		}
		if (list != temp->express)
			return (list);
	}
	return (NULL);
}