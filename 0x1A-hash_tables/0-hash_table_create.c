#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: Size of the hash table
 * Return: Returns the hash table after creation
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_meme = malloc(sizeof(hash_table_t));

	if (size == 0 || table_meme == NULL)
		return (NULL);

	table_meme->size = size;
	table_meme->array = calloc(table_meme->size, sizeof(hash_table_t *));

	if (table_meme->array == NULL)
		return (NULL);

	return (table_meme);
}
