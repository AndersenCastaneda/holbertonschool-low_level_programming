#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table array
 * Return: pointer to the hash table if success, otherwise return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc((size_t)size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	return (table);
}
