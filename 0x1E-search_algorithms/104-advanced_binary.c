#include "search_algos.h"

/**
 * print_array - prints an array
 * @start: start of array
 * @end: end of array
 * @array: pointer to first value of array
 */

void print_array(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);
}


/**
 * recursive_binary - recursive binary search
 * @array: array to search
 * @value: value to search for
 * @left: left half of array
 * @right: right half of array
 * @val: holder to find value
 * Return: index of value where it was found or -1
 */

int recursive_binary(int *array, int value, size_t left, size_t right,
int *val)
{
	size_t mid;

	if (array[left] == value && left >= right)
	{
		*val = left;
		return (*val);
	}
	mid = ((right - left) / 2) + left;
	print_array(array, left, right);
	if (left == right)
		return (*val);
	if (array[mid] == value)
	{
		*val = mid;
		return (recursive_binary(array, value, left, mid, val));
	}
	if (array[mid] > value)
		return (recursive_binary(array, value, left, mid, val));
	return (recursive_binary(array, value, mid + 1, right, val));
}

/**
 * advanced_binary - search, but in binary
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 * Return: index value location or -1 if None or NULL
 */

int advanced_binary(int *array, size_t size, int value)
{

	int val = -1;

	if (!array || size < 1)
		return (val);
	return (recursive_binary(array, value, 0, size - 1, &val));
}
