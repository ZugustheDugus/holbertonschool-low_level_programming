#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value of a key in a hash table
 * @key: keyed location of a value
 * @ht: Pointer to the hash table
 * Return: NULL or the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *srch;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	srch = ht->array[idx];
	for (; srch != NULL; srch = srch->next)
	{
		if ((strcmp(key, srch->key)) == 0)
			return (srch->value);
	}
	return (NULL);
}
