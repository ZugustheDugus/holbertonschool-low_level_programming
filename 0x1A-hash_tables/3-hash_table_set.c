#include "hash_tables.h"

/**
 * hash_table_set - function to set the values of a hash table
 * If there is a collision, a value is added at the beginning of the table.
 * @ht: Hash table
 * @key: specific keying variable for the hash table
 * @value: value to key data to
 * Return: 0 or 1 depending on if values are present
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *srch, *n_node = NULL;
	unsigned long int idx;
	char *n_value = NULL;

	if (!ht || !key || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	srch = ht->array[idx];

	while (srch != NULL)
	{
		if (strcmp(srch->key, key) == 0)
		{
			n_value = strdup(value);
			free(srch->value);
			srch->value = n_value;
			return (1);
		}
		srch = srch->next;
	}

	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
	{
		free(n_node);
		return (0);
	}
	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = ht->array[idx];
	ht->array[idx] = n_node;
	return (1);
}
