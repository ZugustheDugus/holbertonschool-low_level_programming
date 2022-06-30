#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
void print_array(const int *array, size_t size);
int advanced_binary(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif