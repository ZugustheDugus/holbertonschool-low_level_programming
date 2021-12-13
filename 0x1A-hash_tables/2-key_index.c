#include "hash_tables.h"

/**
 * key_index - gets a key at an index, always smaller than total hash size
 * @key: value assigned to data
 * @size: size of the hash table
 * Return: Returns the index relative to the size of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = hash_djb2(key);

	return (idx % size);
}
