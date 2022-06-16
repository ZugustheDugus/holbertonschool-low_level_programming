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
 * binary_search - search, but in binary
 * @array: pointer to first value of array
 * @size: size of array
 * @value: value being searched
 * Return: -1 if NULL or searched value
 */

int binary_search(int *array, size_t size, int value)
{
int mid, left, right, val = -1;
	int *temp = array;

	if (array)
	{
		left = 0, right = ((int)size - 1);
		print_array(temp, left, right);
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (value == temp[mid])
				{
				val = mid;
				break;
				}
			if (value > temp[mid])
				left = mid + 1;
			if (value < temp[mid])
				right = mid - 1;
			if (left <= right)
				print_array(temp, left, right);
		}
	}
	return (val);
}
