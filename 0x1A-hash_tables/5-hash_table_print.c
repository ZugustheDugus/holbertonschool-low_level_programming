#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *srch;
	int f = 1;
	unsigned long int idx;

	if (!ht)
		return;
	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		srch = ht->array[idx];
		while (srch != NULL)
		{
			if (f == 0)
				printf(", ");
			printf("'%s': '%s'", srch->key, srch->value);
			f = 0;
			srch = srch->next;
		}
	}
	printf(")\n");
}
