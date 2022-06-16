#include "search_algos.h"

/**
 * linear_search - linear search function
 * @array: pointer to first element of array
 * @size: size of the array
 * @value: value at the index of the array
 * Return: -1 if NULL or the index of the value requested
 */

int linear_search(int *array, size_t size, int value)
{
  size_t i;

  if (array == NULL)
    return (-1);

  for (i = 0; i < size; i++)
    {
    printf("Value checked array[%i] = [%i]\n", (int)i, array[i]);
    if (array[i] == value)
      return (i);
  }
  return (-1);
}
