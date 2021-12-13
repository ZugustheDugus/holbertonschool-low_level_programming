#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value of a key in a hash table
 * @key: keyed location of a value
 * @ht: Pointer to the hash table
 * Return: NULL or the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((unsigned char *)key, ht->size);
	hash_node_t *srch;

	if (ht->array == NULL || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	if (idx >= ht->size)
		return (NULL);

	if (key && ht)
	{
		srch = ht->array[idx];
		if (srch == NULL)
			return (NULL);
		while (strcmp(srch->key, key) != 0)
			srch = srch->next;
		return (srch->value);
	}
	return (NULL);
}
