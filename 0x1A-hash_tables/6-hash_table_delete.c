#include "hash_tables.h"

/**
 * hash_table_delete -function to delete a hash table
 * @ht: hash table to be deleted
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *srch;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx])
		{
			srch = ht->array[idx]->next;
			free(ht->array[idx]->key);
			free(ht->array[idx]->value);
			free(ht->array[idx]);
			ht->array[idx] = srch;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
