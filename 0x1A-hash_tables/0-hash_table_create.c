#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: Size of the hash table
 * Return: Returns the hash table after creation
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_meme = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!table_meme)
	{
		free(table_meme);
		return (NULL);
	}

	table_meme->size = size;
	table_meme->array = malloc(sizeof(hash_node_t *) * size);

	if (!table_meme->array)
	{
		free(table_meme->array[i]);
		free(table_meme);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table_meme->array[i] = NULL;

	return (table_meme);
}
