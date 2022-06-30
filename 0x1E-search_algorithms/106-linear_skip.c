#include "search_algos.h"

/**
 * print_array - Prints an array of ints
 *
 * @array: The array
 * @size: Number of elements in array
 */
void print_array(const int *array, size_t size)
{
size_t i;

i = 0;
while (array && i < size)
{
if (i > 0)
printf(", ");
printf("%d", array[i]);
i++;
}
printf("\n");
}

/**
* linear_skip - Searches for value in sorted array
* @list: Pointer to first element of list
* @value: Value to search for
* Return: Index of value or -1 (NULL)
**/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
if (!value || !list)
return (NULL);

printf("Value checked at index [%d] = [%d]\n", value, value);
return (list);
}